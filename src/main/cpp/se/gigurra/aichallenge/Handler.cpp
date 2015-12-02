/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "Handler.h"
#include "se/gigurra/aichallenge/LeaveGame.h"
#include "se/gigurra/aichallenge/WelcomeMessage.h"
#include "se/gigurra/aichallenge/ErrorMessage.h"
#include "se/gigurra/aichallenge/Checkin.h"
#include "se/gigurra/aichallenge/RestCheckinReply.h"
#include "se/gigurra/aichallenge/RestListAvail.h"
#include "se/gigurra/aichallenge/RestPostOK.h"
#include "se/gigurra/aichallenge/RestGetAvail.h"
#include "se/gigurra/aichallenge/RestListAvailReply.h"
#include "se/gigurra/aichallenge/RestGetMessagesReply.h"
#include "se/gigurra/aichallenge/RestGetScores.h"
#include "se/gigurra/aichallenge/RestGetScoresReply.h"
#include "se/gigurra/aichallenge/PlayGame.h"
#include "se/gigurra/aichallenge/GameChallengeFound.h"
#include "se/gigurra/aichallenge/GamePlayed.h"
#include "se/gigurra/aichallenge/User.h"
#include "se/gigurra/aichallenge/UserDb.h"
#include "se/gigurra/aichallenge/CmdLineArgs.h"
#include "se/gigurra/aichallenge/games/battleship/Ship.h"
#include "se/gigurra/aichallenge/games/battleship/Segment.h"
#include "se/gigurra/aichallenge/games/battleship/Player.h"
#include "se/gigurra/aichallenge/games/battleship/GameState.h"
#include "se/gigurra/aichallenge/games/battleship/Vec2.h"
#include "se/gigurra/aichallenge/games/battleship/Shot.h"
#include "se/gigurra/aichallenge/games/battleship/PlaceShipsRequest.h"
#include "se/gigurra/aichallenge/games/battleship/PlaceShips.h"
#include "se/gigurra/aichallenge/games/battleship/MakeShotRequest.h"
#include "se/gigurra/aichallenge/games/battleship/MakeShot.h"
#include "se/gigurra/aichallenge/games/battleship/ShotResult.h"
#include "se/gigurra/aichallenge/games/battleship/GameOver.h"
#include "se/gigurra/aichallenge/games/gomoku/Board.h"
#include "se/gigurra/aichallenge/games/gomoku/Player.h"
#include "se/gigurra/aichallenge/games/gomoku/GameState.h"
#include "se/gigurra/aichallenge/games/gomoku/Vec2.h"
#include "se/gigurra/aichallenge/games/gomoku/MakeMoveRequest.h"
#include "se/gigurra/aichallenge/games/gomoku/MakeMove.h"
#include "se/gigurra/aichallenge/games/gomoku/MoveMadeNotification.h"
#include "se/gigurra/aichallenge/games/gomoku/GameOver.h"
#include "se/gigurra/aichallenge/games/go/Vec2.h"
#include "se/gigurra/aichallenge/games/go/Player.h"
#include "se/gigurra/aichallenge/games/go/Group.h"
#include "se/gigurra/aichallenge/games/go/Board.h"
#include "se/gigurra/aichallenge/games/go/GameState.h"
#include "se/gigurra/aichallenge/games/go/Move.h"
#include "se/gigurra/aichallenge/games/go/MoveRequest.h"
#include "se/gigurra/aichallenge/games/go/MakeMove.h"
#include "se/gigurra/aichallenge/games/go/MoveResult.h"
#include "se/gigurra/aichallenge/games/go/GameOver.h"

namespace se {
namespace gigurra {
namespace aichallenge {

Handler::Handler() {}

Handler::~Handler() {}

void Handler::handleDiscard(mgen::MGenBase& o) {
}

void Handler::handleUnknown(mgen::MGenBase& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::Message& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::GameMessage& o) {
	handle(static_cast<se::gigurra::aichallenge::Message&>(o));
}

void Handler::handle(se::gigurra::aichallenge::LeaveGame& o) {
	handle(static_cast<se::gigurra::aichallenge::GameMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::WelcomeMessage& o) {
	handle(static_cast<se::gigurra::aichallenge::Message&>(o));
}

void Handler::handle(se::gigurra::aichallenge::ErrorMessage& o) {
	handle(static_cast<se::gigurra::aichallenge::Message&>(o));
}

void Handler::handle(se::gigurra::aichallenge::Checkin& o) {
	handle(static_cast<se::gigurra::aichallenge::Message&>(o));
}

void Handler::handle(se::gigurra::aichallenge::RestMessage& o) {
	handle(static_cast<se::gigurra::aichallenge::Message&>(o));
}

void Handler::handle(se::gigurra::aichallenge::RestCheckinReply& o) {
	handle(static_cast<se::gigurra::aichallenge::RestMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::RestListAvail& o) {
	handle(static_cast<se::gigurra::aichallenge::RestMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::RestPostOK& o) {
	handle(static_cast<se::gigurra::aichallenge::RestMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::RestGetAvail& o) {
	handle(static_cast<se::gigurra::aichallenge::RestMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::RestListAvailReply& o) {
	handle(static_cast<se::gigurra::aichallenge::RestMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::RestGetMessagesReply& o) {
	handle(static_cast<se::gigurra::aichallenge::RestMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::RestGetScores& o) {
	handle(static_cast<se::gigurra::aichallenge::RestMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::RestGetScoresReply& o) {
	handle(static_cast<se::gigurra::aichallenge::RestMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::PlayGame& o) {
	handle(static_cast<se::gigurra::aichallenge::Message&>(o));
}

void Handler::handle(se::gigurra::aichallenge::GameChallengeFound& o) {
	handle(static_cast<se::gigurra::aichallenge::Message&>(o));
}

void Handler::handle(se::gigurra::aichallenge::GamePlayed& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::User& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::UserDb& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::CmdLineArgs& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::battleship::Ship& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::battleship::Segment& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::battleship::Player& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::battleship::GameState& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::battleship::Vec2& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::battleship::Shot& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::battleship::BattleshipMessage& o) {
	handle(static_cast<se::gigurra::aichallenge::GameMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::battleship::RequestFromServer& o) {
	handle(static_cast<se::gigurra::aichallenge::games::battleship::BattleshipMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::battleship::PlaceShipsRequest& o) {
	handle(static_cast<se::gigurra::aichallenge::games::battleship::RequestFromServer&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::battleship::PlaceShips& o) {
	handle(static_cast<se::gigurra::aichallenge::games::battleship::BattleshipMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::battleship::MakeShotRequest& o) {
	handle(static_cast<se::gigurra::aichallenge::games::battleship::RequestFromServer&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::battleship::MakeShot& o) {
	handle(static_cast<se::gigurra::aichallenge::games::battleship::BattleshipMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::battleship::ShotResult& o) {
	handle(static_cast<se::gigurra::aichallenge::games::battleship::BattleshipMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::battleship::GameOver& o) {
	handle(static_cast<se::gigurra::aichallenge::games::battleship::BattleshipMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::gomoku::Board& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::gomoku::Player& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::gomoku::GameState& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::gomoku::Vec2& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::gomoku::GomokuMessage& o) {
	handle(static_cast<se::gigurra::aichallenge::GameMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::gomoku::RequestFromServer& o) {
	handle(static_cast<se::gigurra::aichallenge::games::gomoku::GomokuMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::gomoku::MakeMoveRequest& o) {
	handle(static_cast<se::gigurra::aichallenge::games::gomoku::RequestFromServer&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::gomoku::MakeMove& o) {
	handle(static_cast<se::gigurra::aichallenge::games::gomoku::GomokuMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::gomoku::MoveMadeNotification& o) {
	handle(static_cast<se::gigurra::aichallenge::games::gomoku::GomokuMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::gomoku::GameOver& o) {
	handle(static_cast<se::gigurra::aichallenge::games::gomoku::GomokuMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::go::Vec2& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::go::Player& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::go::Group& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::go::Board& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::go::GameState& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::go::Move& o) {
	handleDiscard(o);
}

void Handler::handle(se::gigurra::aichallenge::games::go::GoMessage& o) {
	handle(static_cast<se::gigurra::aichallenge::GameMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::go::RequestFromServer& o) {
	handle(static_cast<se::gigurra::aichallenge::games::go::GoMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::go::MoveRequest& o) {
	handle(static_cast<se::gigurra::aichallenge::games::go::RequestFromServer&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::go::MakeMove& o) {
	handle(static_cast<se::gigurra::aichallenge::games::go::GoMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::go::MoveResult& o) {
	handle(static_cast<se::gigurra::aichallenge::games::go::GoMessage&>(o));
}

void Handler::handle(se::gigurra::aichallenge::games::go::GameOver& o) {
	handle(static_cast<se::gigurra::aichallenge::games::go::GoMessage&>(o));
}


} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

