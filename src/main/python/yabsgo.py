import requests
from urlparse import urljoin
import time


def session(base_url, username, password, msg_type_handlers):
    """`msg_type_handlers` is dict from msg_type to handler functions.

    Use something like:

    >>> from gigurrago import session, move_msg, Board
    ...
    ... def handle_move_request(msg):
    ...    import random
    ...
    ...    b = Board(msg)
    ...    print b
    ...    return move_msg(random.randint(0, 8), random.randint(0, 8))
    ...
    ...
    ... session(
    ...     u'http://127.0.0.1:8080', u'peter', u'banan',
    ...     {u'se.gigurra.aichallenge.games.go.MoveRequest': handle_move_request})
    """
    r = requests.get(urljoin(base_url, u'LOGIN/'),
                     params={u'username': username,
                             u'password': password})
    r.raise_for_status()

    session = r.json()[u'session']

    def get(folder, **kwargs):
        params = dict(kwargs)
        params[u'session'] = session

        r = requests.get(urljoin(base_url, folder), params=params)
        r.raise_for_status()
        return r.json()

    def post(msg_type, data_dict):
        r = requests.post(urljoin(base_url, u'SEND/'),
                          params={u'session': session,
                                  u'messagetype': msg_type},
                          json=data_dict)

        r.raise_for_status()

    post('se.gigurra.aichallenge.PlayGame', {'game': 'GO'})

    while True:
        msg_types = get(u'LIST_AVAILABLE/')[u'messageTypes']

        if not msg_types:
            time.sleep(0.1)
            continue

        for msg_type in msg_types:
            for msg in get(u'RECEIVE/', messagetype=msg_type)[u'messages']:
                if msg_type in msg_type_handlers:
                    r = msg_type_handlers[msg_type](msg)

                    if r:
                        post(r[0], r[1])
                else:
                    print u"Didn't handle:", msg_type


def move_msg(x, y):
    return (u'se.gigurra.aichallenge.games.go.MakeMove',
            {u'move': {u'point': {u'x': x, u'y': y}}})


def pass_msg():
    return (u'se.gigurra.aichallenge.games.go.MakeMove',
            {u'move': {}})


class Board(object):
    def __init__(self, json_board):
        self.board = json_board[u'state'][u'board'][u'points']

    def __str__(self):
        return (u'\n' + u'\n'.join(
            u' '.join(self.board[i:i + 9]) for i in xrange(0, 81, 9))) \
            .replace(u'O', u'.')
