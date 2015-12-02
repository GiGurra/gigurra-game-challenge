__author__ = 'johan_home'

import copy
import gigurrago

# Each position has 4 'slots' NSEW. Each slot can have a team and a strength value.

# Each stone emits strength in NSEW directoins, with a drop-off of ..


#To calculate influence of a team at a position, the formula is
# SUM_Friendly(kN, kS, kE, KW) - SUM_Opponent(kN, kS, kE, KW)
# If kN_friend is > kN_opp then the only value stored in that slot is the friendly one.
# Two people cannot both at the same time have influence from a direction towards a positoin

# Influence distance of a stone must be finite (computation time limit)

# Execution
# 1. Sweep all white stones on board and write influence points to all slots
# 2. Sweep all black stones on board and write influence points to all slots
# A stone does not give influence to its own position
# Early game: maximize overall own influence, minimize opponent influence
# Middle game: make as large groups as possible
# end game: Place close to opponent
# Don't place at positions which reduces own group freedoms < 2
# NEVER fill an eye until only eyes are left
# Never fill last two eyes
# Dont fill points with high friendly influence
# Always kill if we can

# Score: Most influenced empty points + mots influenced opponent points

################################# STATIC HELPERS

def makeRow(width):
    out = []
    for col in range(width):
        out.append(Point())
    return out

def makeEmptyBoardPoints(width, height):
    out = []
    for row in range(height):
        out.append(makeRow(width))
    return out

def printPoint(point):
    print point.team,

def printHorizontalDivider(width):
    for i in range(width):
        print "----------",
    print

def team2inflteam(team):
    if team == BLACK:
        return 'b'
    if team == WHITE:
        return 'w'
    return '.'

def dotInfluenceValue(value):
    if value==0:
        return "."
    else:
        return value

def printInfuence(influence):
    print (team2inflteam(influence.team) + str(dotInfluenceValue(influence.value))),

def opponent(team):
    if team == WHITE:
        return BLACK
    if team == BLACK:
        return WHITE
    raise "Unknown team"

def printBoard(board):
    for row in board.points:

        # print divider
        printHorizontalDivider(len(row))

        # print north influence
        for point in row:
            print "   ",
            printInfuence(point.infl_N)
            print "   ",

        print

        # print west influence, stone and east influence
        for point in row:
            print "",
            printInfuence(point.infl_W)
            print "",
            print point.team,
            printInfuence(point.infl_E)
            print "",

        print

        # print south influence
        for point in row:
            print "   ",
            printInfuence(point.infl_S)
            print "   ",

        print


##########################################################
######### CLASSES #

BLACK = 'B'
WHITE = 'W'
NOTEAM = '.'

class Delta(object):
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __hash__(self):
        return hash((self.x, self.y))

    def __eq__(self, other):
        return self.__dict__ == other.__dict__

    def copy(self):
        return copy.deepcopy(self)

class Influence(object):

    def __init__(self, value = 0, team = NOTEAM):
        self.value = value
        self.team = team

    def __hash__(self):
        return hash((self.value, self.team))

    def __eq__(self, other):
        return self.__dict__ == other.__dict__

    def copy(self):
        return copy.deepcopy(self)

class Point(object):

    def __hash__(self):
        return hash((self.team, self.infl_E, self.infl_N, self.infl_W, self.infl_S))

    def __eq__(self, other):
        return self.__dict__ == other.__dict__

    def __init__(self, team = NOTEAM):
        self.team = team
        self.infl_N = Influence(0, NOTEAM)
        self.infl_S = Influence(0, NOTEAM)
        self.infl_W = Influence(0, NOTEAM)
        self.infl_E = Influence(0, NOTEAM)

    def copy(self):
        return copy.deepcopy(self)

    def isEmpty(self):
        return self.team == NOTEAM


    def team2sign(self, myTeam, influenceTeam):
        if (myTeam == influenceTeam):
            return 1
        else:
            return -1

    def influence(self, team, wallDistance):

        if not self.isEmpty():
            return 0

        multiplier = 1
        if wallDistance < 8:
            multiplier = 2
        if wallDistance < 5:
            multiplier = 3

        sum = 0
        sum += self.infl_N.value * self.team2sign(team, self.infl_N.team)
        sum += self.infl_W.value * self.team2sign(team, self.infl_W.team)
        sum += self.infl_S.value * self.team2sign(team, self.infl_S.team)
        sum += self.infl_E.value * self.team2sign(team, self.infl_E.team)

        return multiplier * sum


class Coordinate(object):

    def __init__(self, x, y):
        self.x = x
        self.y = y

    def copy(self):
        return copy.deepcopy(self)

    def __hash__(self):
        return hash((self.x, self.y))

    def __eq__(self, other):
        return self.__dict__ == other.__dict__

    def __repr__(self):
        return "(" + str(self.x) + ", " + str(self.y) + ")"

class Group(object):

    def __hash__(self):
        return hash((self.coordinates, self.team))

    def __eq__(self, other):
        return self.__dict__ == other.__dict__

    def __init__(self, coordinates, team):
        self.coordinates = coordinates
        self.team = team

    def copy(self):
        return copy.deepcopy(self)

    def freedoms(self, board):
        out = set()
        for c in self.coordinates:
            allNeighbors = set(board.neighbors(c.x, c.y))
            emptyNeighbors = filter(lambda n: board.at(n.x, n.y).team == NOTEAM, allNeighbors)
            out.update(emptyNeighbors)
        return out

class Board(object):

    def __hash__(self):
        return hash((self.points, self.width, self.height))

    def __eq__(self, other):
        return self.__dict__ == other.__dict__

    def __init__(self, width, height):
        self.points = makeEmptyBoardPoints(width, height)
        self.width = width
        self.height = height

    def copy(self):
        return copy.deepcopy(self)

    def isInside(self, x, y):
        if x < 0:
            return False
        if x >= self.width:
            return False
        if y < 0:
            return False
        if y >= self.height:
            return False
        return True

    def at(self, x, y):
        if not self.isInside(x,y):
            raise "Not inside board"
        return self.points[y][x]

    def setTeam(self, x, y, team):
        if not self.isInside(x,y):
            raise "Not inside board"
        self.points[y][x].team = team



    def setNorthInfluence(self, x, y, infl):
        if not self.isInside(x,y):
            raise "Not inside board"
        self.points[y][x].infl_N = infl

    def setSouthInfluence(self, x, y, infl):
        if not self.isInside(x,y):
            raise "Not inside board"
        self.points[y][x].infl_S = infl

    def setEastInfluence(self, x, y, infl):
        if not self.isInside(x,y):
            raise "Not inside board"
        self.points[y][x].infl_E = infl

    def setWestInfluence(self, x, y, infl):
        if not self.isInside(x,y):
            raise "Not inside board"
        self.points[y][x].infl_W = infl



    def getNorthInfluence(self, x, y):
        if not self.isInside(x,y):
            raise "Not inside board"
        return self.points[y][x].infl_N

    def getSouthInfluence(self, x, y):
        if not self.isInside(x,y):
            raise "Not inside board"
        return self.points[y][x].infl_S

    def getEastInfluence(self, x, y):
        if not self.isInside(x,y):
            raise "Not inside board"
        return self.points[y][x].infl_E

    def getWestInfluence(self, x, y):
        if not self.isInside(x,y):
            raise "Not inside board"
        return self.points[y][x].infl_W


    def neighbors(self, x0, y0):
        if not self.isInside(x0, y0):
            raise "Not inside board"

        out = set()
        for delta in [Delta(-1, 0), Delta(1, 0), Delta(0, -1), Delta(0, 1)]:
            x = x0 + delta.x
            y = y0 + delta.y
            if self.isInside(x,y):
                out.add(Coordinate(x,y))

        return out

    def neighborsWithTeam(self, x, y, team):
        nRaw = self.neighbors(x,y)
        return filter(lambda n: self.at(n.x, n.y).team == team, nRaw)

    def _groupImpl(self, x, y, team, checked, added):

        allNeighbors = self.neighbors(x, y)

        newNeighbors = allNeighbors - checked
        checked.update(newNeighbors)

        newNeighborsOnMyTeam = filter(lambda n: self.at(n.x, n.y).team == team, newNeighbors)
        added.update(newNeighborsOnMyTeam)

        for c in newNeighborsOnMyTeam:
            self._groupImpl(c.x, c.y, team, checked, added)

    def groupAt(self, x, y):
        if not self.isInside(x,y):
            raise "Not inside board"
        point = self.at(x,y)
        team = point.team
        if team != NOTEAM:
            added = set([Coordinate(x,y)])
            checked = set([Coordinate(x,y)])
            self._groupImpl(x, y, team, checked, added)
            out = Group(added, team)
            return out
        else:
            return None



    def zeroInfluence(self):
        for row in self.points:
            for point in row:
                point.infl_E = Influence()
                point.infl_N = Influence()
                point.infl_S = Influence()
                point.infl_W = Influence()

    def walkInfluence(self, values, team, delta, x0, y0, influenceSetter, influenceGetter):
        for i in range(len(values)):
            value = values[i]
            x = x0 + delta.x * (i+1)
            y = y0 + delta.y * (i+1)
            if self.isInside(x,y):
                prevInfluence = influenceGetter(x,y)
                if value > prevInfluence.value:
                    influenceSetter(x, y, Influence(value, team))

    def spreadSingleInfluence(self, x0, y0):

        point = self.at(x0, y0)

        values = [4, 2, 1]
        team = point.team

        # Walk west
        self.walkInfluence(values, team, Delta(-1, 0), x0, y0, self.setEastInfluence, self.getEastInfluence)

        # Walk east
        self.walkInfluence(values, team, Delta(1, 0), x0, y0, self.setWestInfluence, self.getWestInfluence)

        # Walk north
        self.walkInfluence(values, team, Delta(0, -1), x0, y0, self.setSouthInfluence, self.getSouthInfluence)

        # Walk south
        self.walkInfluence(values, team, Delta(0, 1), x0, y0, self.setNorthInfluence, self.getNorthInfluence)

    def spreadInfluence(self):
        for y in range(self.height):
            for x in range(self.width):
                if self.at(x,y).team != NOTEAM:
                    self.spreadSingleInfluence(x,y)

    def numKillsForMove(self, team, x, y):
        neighbors = self.neighbors(x,y)
        enemyTeam = opponent(team)
        enemyNeighbors = filter(lambda n: self.at(n.x, n.y).team == enemyTeam, neighbors)

        killedCoordinates = set()

        for n in enemyNeighbors:
            enemyGroup = self.groupAt(n.x, n.y)
            if len(enemyGroup.freedoms(self)) == 1:
                killedCoordinates.update(enemyGroup.coordinates)

        return len(killedCoordinates)

    def isSuicide(self, x, y, team):

        if not self.at(x,y).isEmpty():
            raise "invalid call"

        self.setTeam(x,y,team)
        group = self.groupAt(x,y)
        freedoms = group.freedoms(self)
        self.setTeam(x,y,NOTEAM)
        return len(freedoms) == 0

    def isInferredSuicide(self, x, y, team):

        if not self.at(x,y).isEmpty():
            raise "invalid call"

        self.setTeam(x,y,team)
        group = self.groupAt(x,y)
        freedoms = group.freedoms(self)
        self.setTeam(x,y,NOTEAM)
        return len(freedoms) < 2

    def isDecentMove(self, x, y, team, includeEyes):

        if not self.isInside(x,y):
            return False

        if not self.at(x,y).isEmpty():
            return False

        if not includeEyes and self.isEye(x, y, team):
            return False

        if self.numKillsForMove(team, x, y) > 0:
            return True

        if self.isInferredSuicide(x,y,team):
            return False

        return True

    def isEye(self, x, y, team):

        if not self.at(x,y).team == NOTEAM:
            return False

        neighbors = self.neighbors(x,y)
        friendlyNeighbors = filter(lambda n: self.at(n.x, n.y).team == team, neighbors)

        return len(neighbors) == len(friendlyNeighbors)


    def getDecentMoves(self, team, includeEyes = False):

        # Create all board combinations
        moves = []

        for y in range(self.height):
            for x in range(self.width):
                if self.isDecentMove(x,y,team, includeEyes):
                    moves.append(Coordinate(x, y))

        return moves

    def getScore(self, team):

        out = 0

        for y in range(self.height):
            for x in range(self.width):
                if self.at(x,y).team == team:
                    out += 1

        return out

    def wallDistance(self, move):
        dx = min(move.x, self.width-1-move.x)
        dy = min(move.y, self.height-1-move.y)
        return dx + dy

    def getTotalinfluence(self, move, team):

        # corner : influence x3, side : influence x2, middle : influence x1
        # Influence is only calculated on empty slots

        out = 0

        self.zeroInfluence()
        self.setTeam(move.x, move.y, team)
        self.spreadInfluence()

        for y in range(self.height):
            for x in range(self.width):
                point = self.at(x,y)
                if point.isEmpty():
                    wallDistance = self.wallDistance(move)
                    out += point.influence(team, wallDistance)


        self.setTeam(move.x, move.y, NOTEAM)

        # Calculate influence

        return out


def decideMove(board, team):

    decentMoves = board.getDecentMoves(team)

    # Always kill if we can kill. We like killing stones..
    bestKill = None
    for move in decentMoves:
        numKills = board.numKillsForMove(team, move.x, move.y)
        if numKills > 0:
            if not bestKill or numKills > bestKill['numKills']:
                bestKill = { 'move': move, 'numKills': numKills}
    if bestKill:
        return bestKill

    # If we can't kill, maximize influence
    bestInfluenceMove = None
    for move in decentMoves:
        influenceScore = board.getTotalinfluence(move, team)
        if not bestInfluenceMove or influenceScore > bestInfluenceMove['influenceScore']:
            bestInfluenceMove = { 'move': move, 'influenceScore': influenceScore }
    if bestInfluenceMove:
        return bestInfluenceMove

    # If we only have eyes left... make sure we have more than one freedom before placing there
    eyeMoves = set(board.getDecentMoves(team, True)) - set(decentMoves)
    for move in eyeMoves:
        neighbor = list(board.neighbors(move.x, move.y))[0]
        if len(board.groupAt(neighbor.x, neighbor.y).freedoms(board)) > 2:
            return { 'move': move, 'eye_moreThanTwoEyes': True }

    # Default to pass
    return {}


#printBoard(board)
#print()


#decentMoves = board.getDecentMoves(BLACK)

#assert board.getScore(BLACK) == 3
#assert board.getScore(WHITE) == 3
#assert len(decentMoves) == (81-6)

#print decentMoves

#bestMove = decideMove(board, BLACK)

#print bestMove

def netTeam2Team(netTeam):
    if netTeam == 'O':
        return NOTEAM
    if netTeam == 'W':
        return WHITE
    if netTeam == 'B':
        return BLACK
    raise "Unknown team"

def handle_error_message(msg):
    print 'Error from server:\n' + msg[u'msg']


def handle_game_over(msg):
    raise RuntimeError('Game Over:' + str(msg))

PLAYER_NAME = u'johan'

def handle_move_request(msg):

    boardData = msg['state']['board']['points']
    boardWidth = 9 #9 msg['state']['board']['width']
    boardHeight = 9 #msg['state']['board']['height']

    team = BLACK

    if msg['state']['whitePlayer']['name'] == PLAYER_NAME:
        team = WHITE
    elif msg['state']['blackPlayer']['name'] == PLAYER_NAME:
        team = BLACK
    else:
        raise "Could not determine team"

    board = Board(boardWidth, boardHeight)

    i = 0
    for y in range(boardHeight):
        for x in range(boardWidth):
            board.setTeam(x,y,netTeam2Team(boardData[i]))
            i += 1

    move = decideMove(board, team)
    print "move: " + str(move)

    if move == {}:
        return gigurrago.pass_msg()
    else:
        c = move['move']
        return gigurrago.move_msg(c.x, c.y)


def handle_move_result(msg):
    1

while True:
    try:
        gigurrago.session(
            u'http://192.168.43.194:8080', PLAYER_NAME, u'apple',
            {u'se.gigurra.aichallenge.games.go.MoveRequest': handle_move_request,
             u'se.gigurra.aichallenge.ErrorMessage': handle_error_message,
             u'se.gigurra.aichallenge.games.go.GameOver': handle_game_over,
             u'se.gigurra.aichallenge.games.go.MoveResult': handle_move_result})
    except RuntimeError as e:
        print e