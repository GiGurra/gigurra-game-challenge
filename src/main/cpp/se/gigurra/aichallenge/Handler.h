/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_HANDLER
#define SE_GIGURRA_AICHALLENGE_HANDLER

#include "ForwardDeclare.h"

namespace se {
namespace gigurra {
namespace aichallenge {

class Handler  {
	public:

	Handler();
	virtual ~Handler();
	virtual void handleDiscard(mgen::MGenBase& o);
	virtual void handleUnknown(mgen::MGenBase& o);
	virtual void handle(se::gigurra::aichallenge::Message& o);
	virtual void handle(se::gigurra::aichallenge::GameMessage& o);
	virtual void handle(se::gigurra::aichallenge::LeaveGame& o);
	virtual void handle(se::gigurra::aichallenge::WelcomeMessage& o);
	virtual void handle(se::gigurra::aichallenge::ErrorMessage& o);
	virtual void handle(se::gigurra::aichallenge::Checkin& o);
	virtual void handle(se::gigurra::aichallenge::RestMessage& o);
	virtual void handle(se::gigurra::aichallenge::RestCheckinReply& o);
	virtual void handle(se::gigurra::aichallenge::RestListAvail& o);
	virtual void handle(se::gigurra::aichallenge::RestPostOK& o);
	virtual void handle(se::gigurra::aichallenge::RestGetAvail& o);
	virtual void handle(se::gigurra::aichallenge::RestListAvailReply& o);
	virtual void handle(se::gigurra::aichallenge::RestGetMessagesReply& o);
	virtual void handle(se::gigurra::aichallenge::RestGetScores& o);
	virtual void handle(se::gigurra::aichallenge::RestGetScoresReply& o);
	virtual void handle(se::gigurra::aichallenge::PlayGame& o);
	virtual void handle(se::gigurra::aichallenge::GameChallengeFound& o);
	virtual void handle(se::gigurra::aichallenge::GamePlayed& o);
	virtual void handle(se::gigurra::aichallenge::User& o);
	virtual void handle(se::gigurra::aichallenge::UserDb& o);
	virtual void handle(se::gigurra::aichallenge::CmdLineArgs& o);
	virtual void handle(se::gigurra::aichallenge::games::battleship::Ship& o);
	virtual void handle(se::gigurra::aichallenge::games::battleship::Segment& o);
	virtual void handle(se::gigurra::aichallenge::games::battleship::Player& o);
	virtual void handle(se::gigurra::aichallenge::games::battleship::GameState& o);
	virtual void handle(se::gigurra::aichallenge::games::battleship::Vec2& o);
	virtual void handle(se::gigurra::aichallenge::games::battleship::Shot& o);
	virtual void handle(se::gigurra::aichallenge::games::battleship::BattleshipMessage& o);
	virtual void handle(se::gigurra::aichallenge::games::battleship::RequestFromServer& o);
	virtual void handle(se::gigurra::aichallenge::games::battleship::PlaceShipsRequest& o);
	virtual void handle(se::gigurra::aichallenge::games::battleship::PlaceShips& o);
	virtual void handle(se::gigurra::aichallenge::games::battleship::MakeShotRequest& o);
	virtual void handle(se::gigurra::aichallenge::games::battleship::MakeShot& o);
	virtual void handle(se::gigurra::aichallenge::games::battleship::ShotResult& o);
	virtual void handle(se::gigurra::aichallenge::games::battleship::GameOver& o);
	virtual void handle(se::gigurra::aichallenge::games::gomoku::Board& o);
	virtual void handle(se::gigurra::aichallenge::games::gomoku::Player& o);
	virtual void handle(se::gigurra::aichallenge::games::gomoku::GameState& o);
	virtual void handle(se::gigurra::aichallenge::games::gomoku::Vec2& o);
	virtual void handle(se::gigurra::aichallenge::games::gomoku::GomokuMessage& o);
	virtual void handle(se::gigurra::aichallenge::games::gomoku::RequestFromServer& o);
	virtual void handle(se::gigurra::aichallenge::games::gomoku::MakeMoveRequest& o);
	virtual void handle(se::gigurra::aichallenge::games::gomoku::MakeMove& o);
	virtual void handle(se::gigurra::aichallenge::games::gomoku::MoveMadeNotification& o);
	virtual void handle(se::gigurra::aichallenge::games::gomoku::GameOver& o);
	virtual void handle(se::gigurra::aichallenge::games::go::Vec2& o);
	virtual void handle(se::gigurra::aichallenge::games::go::Player& o);
	virtual void handle(se::gigurra::aichallenge::games::go::Group& o);
	virtual void handle(se::gigurra::aichallenge::games::go::Board& o);
	virtual void handle(se::gigurra::aichallenge::games::go::GameState& o);
	virtual void handle(se::gigurra::aichallenge::games::go::Move& o);
	virtual void handle(se::gigurra::aichallenge::games::go::GoMessage& o);
	virtual void handle(se::gigurra::aichallenge::games::go::RequestFromServer& o);
	virtual void handle(se::gigurra::aichallenge::games::go::MoveRequest& o);
	virtual void handle(se::gigurra::aichallenge::games::go::MakeMove& o);
	virtual void handle(se::gigurra::aichallenge::games::go::MoveResult& o);
	virtual void handle(se::gigurra::aichallenge::games::go::GameOver& o);

}; // End class Handler

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

#endif
