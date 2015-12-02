/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_FORWARDDECLARE
#define SE_GIGURRA_AICHALLENGE_FORWARDDECLARE

#include "mgen/classes/MGenBase.h"

namespace se {
namespace gigurra {
namespace aichallenge {

class Message;
class GameMessage;
class LeaveGame;
class WelcomeMessage;
class ErrorMessage;
class Checkin;
class RestMessage;
class RestCheckinReply;
class RestListAvail;
class RestPostOK;
class RestGetAvail;
class RestListAvailReply;
class RestGetMessagesReply;
class RestGetScores;
class RestGetScoresReply;
class PlayGame;
class GameChallengeFound;
class GamePlayed;
class User;
class UserDb;
class CmdLineArgs;

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace battleship {

class Ship;
class Segment;
class Player;
class GameState;
class Vec2;
class Shot;
class BattleshipMessage;
class RequestFromServer;
class PlaceShipsRequest;
class PlaceShips;
class MakeShotRequest;
class MakeShot;
class ShotResult;
class GameOver;

} // End namespace battleship
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace gomoku {

class Board;
class Player;
class GameState;
class Vec2;
class GomokuMessage;
class RequestFromServer;
class MakeMoveRequest;
class MakeMove;
class MoveMadeNotification;
class GameOver;

} // End namespace gomoku
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace go {

class Vec2;
class Player;
class Group;
class Board;
class GameState;
class Move;
class GoMessage;
class RequestFromServer;
class MoveRequest;
class MakeMove;
class MoveResult;
class GameOver;

} // End namespace go
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se


#endif
