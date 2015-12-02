# coding: utf-8
import gigurrago
import random


class Board(gigurrago.Board):
    def at(self, x, y):
        return self.board[x + y * 9]


def handle_error_message(msg):
    raise RuntimeError('Error from server:\n' + msg[u'msg'])


def handle_game_over(msg):
    raise RuntimeError('Game Over:' + str(msg))


def handle_move_request(msg):
    b = Board(msg)
    print b
    return gigurrago.move_msg(random.randint(0, 8),
                           random.randint(0, 8))


gigurrago.session(
    u'http://127.0.0.1:8080', u'peter', u'banan',
    {u'se.gigurra.aichallenge.games.go.MoveRequest': handle_move_request,
     u'se.gigurra.aichallenge.ErrorMessage': handle_error_message,
     u'se.gigurra.aichallenge.games.go.GameOver': handle_game_over})
