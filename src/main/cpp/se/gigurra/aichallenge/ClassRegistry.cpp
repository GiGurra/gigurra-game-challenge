/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "ClassRegistry.h"
#include "se/gigurra/aichallenge/Message.cpp"
#include "se/gigurra/aichallenge/GameMessage.cpp"
#include "se/gigurra/aichallenge/LeaveGame.cpp"
#include "se/gigurra/aichallenge/WelcomeMessage.cpp"
#include "se/gigurra/aichallenge/ErrorMessage.cpp"
#include "se/gigurra/aichallenge/Checkin.cpp"
#include "se/gigurra/aichallenge/RestMessage.cpp"
#include "se/gigurra/aichallenge/RestCheckinReply.cpp"
#include "se/gigurra/aichallenge/RestListAvail.cpp"
#include "se/gigurra/aichallenge/RestPostOK.cpp"
#include "se/gigurra/aichallenge/RestGetAvail.cpp"
#include "se/gigurra/aichallenge/RestListAvailReply.cpp"
#include "se/gigurra/aichallenge/RestGetMessagesReply.cpp"
#include "se/gigurra/aichallenge/RestGetScores.cpp"
#include "se/gigurra/aichallenge/RestGetScoresReply.cpp"
#include "se/gigurra/aichallenge/PlayGame.cpp"
#include "se/gigurra/aichallenge/GameChallengeFound.cpp"
#include "se/gigurra/aichallenge/GamePlayed.cpp"
#include "se/gigurra/aichallenge/User.cpp"
#include "se/gigurra/aichallenge/UserDb.cpp"
#include "se/gigurra/aichallenge/CmdLineArgs.cpp"
#include "se/gigurra/aichallenge/games/battleship/Ship.cpp"
#include "se/gigurra/aichallenge/games/battleship/Segment.cpp"
#include "se/gigurra/aichallenge/games/battleship/Player.cpp"
#include "se/gigurra/aichallenge/games/battleship/GameState.cpp"
#include "se/gigurra/aichallenge/games/battleship/Vec2.cpp"
#include "se/gigurra/aichallenge/games/battleship/Shot.cpp"
#include "se/gigurra/aichallenge/games/battleship/BattleshipMessage.cpp"
#include "se/gigurra/aichallenge/games/battleship/RequestFromServer.cpp"
#include "se/gigurra/aichallenge/games/battleship/PlaceShipsRequest.cpp"
#include "se/gigurra/aichallenge/games/battleship/PlaceShips.cpp"
#include "se/gigurra/aichallenge/games/battleship/MakeShotRequest.cpp"
#include "se/gigurra/aichallenge/games/battleship/MakeShot.cpp"
#include "se/gigurra/aichallenge/games/battleship/ShotResult.cpp"
#include "se/gigurra/aichallenge/games/battleship/GameOver.cpp"
#include "se/gigurra/aichallenge/games/gomoku/Board.cpp"
#include "se/gigurra/aichallenge/games/gomoku/Player.cpp"
#include "se/gigurra/aichallenge/games/gomoku/GameState.cpp"
#include "se/gigurra/aichallenge/games/gomoku/Vec2.cpp"
#include "se/gigurra/aichallenge/games/gomoku/GomokuMessage.cpp"
#include "se/gigurra/aichallenge/games/gomoku/RequestFromServer.cpp"
#include "se/gigurra/aichallenge/games/gomoku/MakeMoveRequest.cpp"
#include "se/gigurra/aichallenge/games/gomoku/MakeMove.cpp"
#include "se/gigurra/aichallenge/games/gomoku/MoveMadeNotification.cpp"
#include "se/gigurra/aichallenge/games/gomoku/GameOver.cpp"
#include "se/gigurra/aichallenge/games/go/Vec2.cpp"
#include "se/gigurra/aichallenge/games/go/Player.cpp"
#include "se/gigurra/aichallenge/games/go/Group.cpp"
#include "se/gigurra/aichallenge/games/go/Board.cpp"
#include "se/gigurra/aichallenge/games/go/GameState.cpp"
#include "se/gigurra/aichallenge/games/go/Move.cpp"
#include "se/gigurra/aichallenge/games/go/GoMessage.cpp"
#include "se/gigurra/aichallenge/games/go/RequestFromServer.cpp"
#include "se/gigurra/aichallenge/games/go/MoveRequest.cpp"
#include "se/gigurra/aichallenge/games/go/MakeMove.cpp"
#include "se/gigurra/aichallenge/games/go/MoveResult.cpp"
#include "se/gigurra/aichallenge/games/go/GameOver.cpp"
#include "se/gigurra/aichallenge/GameSelection.cpp"
#include "se/gigurra/aichallenge/games/battleship/GamePhase.cpp"
#include "se/gigurra/aichallenge/games/gomoku/Team.cpp"
#include "se/gigurra/aichallenge/games/gomoku/GamePhase.cpp"
#include "se/gigurra/aichallenge/games/go/GamePhase.cpp"
#include "se/gigurra/aichallenge/games/go/Team.cpp"
#include "se/gigurra/aichallenge/Dispatcher.cpp"
#include "se/gigurra/aichallenge/Handler.cpp"

namespace se {
namespace gigurra {
namespace aichallenge {

ClassRegistry::ClassRegistry() {
	add<se::gigurra::aichallenge::Message>();
	add<se::gigurra::aichallenge::GameMessage>();
	add<se::gigurra::aichallenge::LeaveGame>();
	add<se::gigurra::aichallenge::WelcomeMessage>();
	add<se::gigurra::aichallenge::ErrorMessage>();
	add<se::gigurra::aichallenge::Checkin>();
	add<se::gigurra::aichallenge::RestMessage>();
	add<se::gigurra::aichallenge::RestCheckinReply>();
	add<se::gigurra::aichallenge::RestListAvail>();
	add<se::gigurra::aichallenge::RestPostOK>();
	add<se::gigurra::aichallenge::RestGetAvail>();
	add<se::gigurra::aichallenge::RestListAvailReply>();
	add<se::gigurra::aichallenge::RestGetMessagesReply>();
	add<se::gigurra::aichallenge::RestGetScores>();
	add<se::gigurra::aichallenge::RestGetScoresReply>();
	add<se::gigurra::aichallenge::PlayGame>();
	add<se::gigurra::aichallenge::GameChallengeFound>();
	add<se::gigurra::aichallenge::GamePlayed>();
	add<se::gigurra::aichallenge::User>();
	add<se::gigurra::aichallenge::UserDb>();
	add<se::gigurra::aichallenge::CmdLineArgs>();
	add<se::gigurra::aichallenge::games::battleship::Ship>();
	add<se::gigurra::aichallenge::games::battleship::Segment>();
	add<se::gigurra::aichallenge::games::battleship::Player>();
	add<se::gigurra::aichallenge::games::battleship::GameState>();
	add<se::gigurra::aichallenge::games::battleship::Vec2>();
	add<se::gigurra::aichallenge::games::battleship::Shot>();
	add<se::gigurra::aichallenge::games::battleship::BattleshipMessage>();
	add<se::gigurra::aichallenge::games::battleship::RequestFromServer>();
	add<se::gigurra::aichallenge::games::battleship::PlaceShipsRequest>();
	add<se::gigurra::aichallenge::games::battleship::PlaceShips>();
	add<se::gigurra::aichallenge::games::battleship::MakeShotRequest>();
	add<se::gigurra::aichallenge::games::battleship::MakeShot>();
	add<se::gigurra::aichallenge::games::battleship::ShotResult>();
	add<se::gigurra::aichallenge::games::battleship::GameOver>();
	add<se::gigurra::aichallenge::games::gomoku::Board>();
	add<se::gigurra::aichallenge::games::gomoku::Player>();
	add<se::gigurra::aichallenge::games::gomoku::GameState>();
	add<se::gigurra::aichallenge::games::gomoku::Vec2>();
	add<se::gigurra::aichallenge::games::gomoku::GomokuMessage>();
	add<se::gigurra::aichallenge::games::gomoku::RequestFromServer>();
	add<se::gigurra::aichallenge::games::gomoku::MakeMoveRequest>();
	add<se::gigurra::aichallenge::games::gomoku::MakeMove>();
	add<se::gigurra::aichallenge::games::gomoku::MoveMadeNotification>();
	add<se::gigurra::aichallenge::games::gomoku::GameOver>();
	add<se::gigurra::aichallenge::games::go::Vec2>();
	add<se::gigurra::aichallenge::games::go::Player>();
	add<se::gigurra::aichallenge::games::go::Group>();
	add<se::gigurra::aichallenge::games::go::Board>();
	add<se::gigurra::aichallenge::games::go::GameState>();
	add<se::gigurra::aichallenge::games::go::Move>();
	add<se::gigurra::aichallenge::games::go::GoMessage>();
	add<se::gigurra::aichallenge::games::go::RequestFromServer>();
	add<se::gigurra::aichallenge::games::go::MoveRequest>();
	add<se::gigurra::aichallenge::games::go::MakeMove>();
	add<se::gigurra::aichallenge::games::go::MoveResult>();
	add<se::gigurra::aichallenge::games::go::GameOver>();
}

ClassRegistry::~ClassRegistry() {
}

const mgen::ClassRegistryEntry * se::gigurra::aichallenge::ClassRegistry::getByIds(const std::vector<short>& ids) const {
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_Message(se::gigurra::aichallenge::Message::_type_ids(), se::gigurra::aichallenge::Message::_type_name(), se::gigurra::aichallenge::Message::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_GameMessage(se::gigurra::aichallenge::GameMessage::_type_ids(), se::gigurra::aichallenge::GameMessage::_type_name(), se::gigurra::aichallenge::GameMessage::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_LeaveGame(se::gigurra::aichallenge::LeaveGame::_type_ids(), se::gigurra::aichallenge::LeaveGame::_type_name(), se::gigurra::aichallenge::LeaveGame::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_WelcomeMessage(se::gigurra::aichallenge::WelcomeMessage::_type_ids(), se::gigurra::aichallenge::WelcomeMessage::_type_name(), se::gigurra::aichallenge::WelcomeMessage::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_ErrorMessage(se::gigurra::aichallenge::ErrorMessage::_type_ids(), se::gigurra::aichallenge::ErrorMessage::_type_name(), se::gigurra::aichallenge::ErrorMessage::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_Checkin(se::gigurra::aichallenge::Checkin::_type_ids(), se::gigurra::aichallenge::Checkin::_type_name(), se::gigurra::aichallenge::Checkin::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_RestMessage(se::gigurra::aichallenge::RestMessage::_type_ids(), se::gigurra::aichallenge::RestMessage::_type_name(), se::gigurra::aichallenge::RestMessage::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_RestCheckinReply(se::gigurra::aichallenge::RestCheckinReply::_type_ids(), se::gigurra::aichallenge::RestCheckinReply::_type_name(), se::gigurra::aichallenge::RestCheckinReply::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_RestListAvail(se::gigurra::aichallenge::RestListAvail::_type_ids(), se::gigurra::aichallenge::RestListAvail::_type_name(), se::gigurra::aichallenge::RestListAvail::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_RestPostOK(se::gigurra::aichallenge::RestPostOK::_type_ids(), se::gigurra::aichallenge::RestPostOK::_type_name(), se::gigurra::aichallenge::RestPostOK::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_RestGetAvail(se::gigurra::aichallenge::RestGetAvail::_type_ids(), se::gigurra::aichallenge::RestGetAvail::_type_name(), se::gigurra::aichallenge::RestGetAvail::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_RestListAvailReply(se::gigurra::aichallenge::RestListAvailReply::_type_ids(), se::gigurra::aichallenge::RestListAvailReply::_type_name(), se::gigurra::aichallenge::RestListAvailReply::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_RestGetMessagesReply(se::gigurra::aichallenge::RestGetMessagesReply::_type_ids(), se::gigurra::aichallenge::RestGetMessagesReply::_type_name(), se::gigurra::aichallenge::RestGetMessagesReply::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_RestGetScores(se::gigurra::aichallenge::RestGetScores::_type_ids(), se::gigurra::aichallenge::RestGetScores::_type_name(), se::gigurra::aichallenge::RestGetScores::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_RestGetScoresReply(se::gigurra::aichallenge::RestGetScoresReply::_type_ids(), se::gigurra::aichallenge::RestGetScoresReply::_type_name(), se::gigurra::aichallenge::RestGetScoresReply::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_PlayGame(se::gigurra::aichallenge::PlayGame::_type_ids(), se::gigurra::aichallenge::PlayGame::_type_name(), se::gigurra::aichallenge::PlayGame::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_GameChallengeFound(se::gigurra::aichallenge::GameChallengeFound::_type_ids(), se::gigurra::aichallenge::GameChallengeFound::_type_name(), se::gigurra::aichallenge::GameChallengeFound::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_GamePlayed(se::gigurra::aichallenge::GamePlayed::_type_ids(), se::gigurra::aichallenge::GamePlayed::_type_name(), se::gigurra::aichallenge::GamePlayed::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_User(se::gigurra::aichallenge::User::_type_ids(), se::gigurra::aichallenge::User::_type_name(), se::gigurra::aichallenge::User::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_UserDb(se::gigurra::aichallenge::UserDb::_type_ids(), se::gigurra::aichallenge::UserDb::_type_name(), se::gigurra::aichallenge::UserDb::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_CmdLineArgs(se::gigurra::aichallenge::CmdLineArgs::_type_ids(), se::gigurra::aichallenge::CmdLineArgs::_type_name(), se::gigurra::aichallenge::CmdLineArgs::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_battleship_Ship(se::gigurra::aichallenge::games::battleship::Ship::_type_ids(), se::gigurra::aichallenge::games::battleship::Ship::_type_name(), se::gigurra::aichallenge::games::battleship::Ship::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_battleship_Segment(se::gigurra::aichallenge::games::battleship::Segment::_type_ids(), se::gigurra::aichallenge::games::battleship::Segment::_type_name(), se::gigurra::aichallenge::games::battleship::Segment::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_battleship_Player(se::gigurra::aichallenge::games::battleship::Player::_type_ids(), se::gigurra::aichallenge::games::battleship::Player::_type_name(), se::gigurra::aichallenge::games::battleship::Player::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_battleship_GameState(se::gigurra::aichallenge::games::battleship::GameState::_type_ids(), se::gigurra::aichallenge::games::battleship::GameState::_type_name(), se::gigurra::aichallenge::games::battleship::GameState::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_battleship_Vec2(se::gigurra::aichallenge::games::battleship::Vec2::_type_ids(), se::gigurra::aichallenge::games::battleship::Vec2::_type_name(), se::gigurra::aichallenge::games::battleship::Vec2::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_battleship_Shot(se::gigurra::aichallenge::games::battleship::Shot::_type_ids(), se::gigurra::aichallenge::games::battleship::Shot::_type_name(), se::gigurra::aichallenge::games::battleship::Shot::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_battleship_BattleshipMessage(se::gigurra::aichallenge::games::battleship::BattleshipMessage::_type_ids(), se::gigurra::aichallenge::games::battleship::BattleshipMessage::_type_name(), se::gigurra::aichallenge::games::battleship::BattleshipMessage::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_battleship_RequestFromServer(se::gigurra::aichallenge::games::battleship::RequestFromServer::_type_ids(), se::gigurra::aichallenge::games::battleship::RequestFromServer::_type_name(), se::gigurra::aichallenge::games::battleship::RequestFromServer::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_battleship_PlaceShipsRequest(se::gigurra::aichallenge::games::battleship::PlaceShipsRequest::_type_ids(), se::gigurra::aichallenge::games::battleship::PlaceShipsRequest::_type_name(), se::gigurra::aichallenge::games::battleship::PlaceShipsRequest::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_battleship_PlaceShips(se::gigurra::aichallenge::games::battleship::PlaceShips::_type_ids(), se::gigurra::aichallenge::games::battleship::PlaceShips::_type_name(), se::gigurra::aichallenge::games::battleship::PlaceShips::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_battleship_MakeShotRequest(se::gigurra::aichallenge::games::battleship::MakeShotRequest::_type_ids(), se::gigurra::aichallenge::games::battleship::MakeShotRequest::_type_name(), se::gigurra::aichallenge::games::battleship::MakeShotRequest::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_battleship_MakeShot(se::gigurra::aichallenge::games::battleship::MakeShot::_type_ids(), se::gigurra::aichallenge::games::battleship::MakeShot::_type_name(), se::gigurra::aichallenge::games::battleship::MakeShot::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_battleship_ShotResult(se::gigurra::aichallenge::games::battleship::ShotResult::_type_ids(), se::gigurra::aichallenge::games::battleship::ShotResult::_type_name(), se::gigurra::aichallenge::games::battleship::ShotResult::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_battleship_GameOver(se::gigurra::aichallenge::games::battleship::GameOver::_type_ids(), se::gigurra::aichallenge::games::battleship::GameOver::_type_name(), se::gigurra::aichallenge::games::battleship::GameOver::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_gomoku_Board(se::gigurra::aichallenge::games::gomoku::Board::_type_ids(), se::gigurra::aichallenge::games::gomoku::Board::_type_name(), se::gigurra::aichallenge::games::gomoku::Board::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_gomoku_Player(se::gigurra::aichallenge::games::gomoku::Player::_type_ids(), se::gigurra::aichallenge::games::gomoku::Player::_type_name(), se::gigurra::aichallenge::games::gomoku::Player::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_gomoku_GameState(se::gigurra::aichallenge::games::gomoku::GameState::_type_ids(), se::gigurra::aichallenge::games::gomoku::GameState::_type_name(), se::gigurra::aichallenge::games::gomoku::GameState::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_gomoku_Vec2(se::gigurra::aichallenge::games::gomoku::Vec2::_type_ids(), se::gigurra::aichallenge::games::gomoku::Vec2::_type_name(), se::gigurra::aichallenge::games::gomoku::Vec2::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_gomoku_GomokuMessage(se::gigurra::aichallenge::games::gomoku::GomokuMessage::_type_ids(), se::gigurra::aichallenge::games::gomoku::GomokuMessage::_type_name(), se::gigurra::aichallenge::games::gomoku::GomokuMessage::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_gomoku_RequestFromServer(se::gigurra::aichallenge::games::gomoku::RequestFromServer::_type_ids(), se::gigurra::aichallenge::games::gomoku::RequestFromServer::_type_name(), se::gigurra::aichallenge::games::gomoku::RequestFromServer::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_gomoku_MakeMoveRequest(se::gigurra::aichallenge::games::gomoku::MakeMoveRequest::_type_ids(), se::gigurra::aichallenge::games::gomoku::MakeMoveRequest::_type_name(), se::gigurra::aichallenge::games::gomoku::MakeMoveRequest::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_gomoku_MakeMove(se::gigurra::aichallenge::games::gomoku::MakeMove::_type_ids(), se::gigurra::aichallenge::games::gomoku::MakeMove::_type_name(), se::gigurra::aichallenge::games::gomoku::MakeMove::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_gomoku_MoveMadeNotification(se::gigurra::aichallenge::games::gomoku::MoveMadeNotification::_type_ids(), se::gigurra::aichallenge::games::gomoku::MoveMadeNotification::_type_name(), se::gigurra::aichallenge::games::gomoku::MoveMadeNotification::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_gomoku_GameOver(se::gigurra::aichallenge::games::gomoku::GameOver::_type_ids(), se::gigurra::aichallenge::games::gomoku::GameOver::_type_name(), se::gigurra::aichallenge::games::gomoku::GameOver::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_go_Vec2(se::gigurra::aichallenge::games::go::Vec2::_type_ids(), se::gigurra::aichallenge::games::go::Vec2::_type_name(), se::gigurra::aichallenge::games::go::Vec2::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_go_Player(se::gigurra::aichallenge::games::go::Player::_type_ids(), se::gigurra::aichallenge::games::go::Player::_type_name(), se::gigurra::aichallenge::games::go::Player::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_go_Group(se::gigurra::aichallenge::games::go::Group::_type_ids(), se::gigurra::aichallenge::games::go::Group::_type_name(), se::gigurra::aichallenge::games::go::Group::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_go_Board(se::gigurra::aichallenge::games::go::Board::_type_ids(), se::gigurra::aichallenge::games::go::Board::_type_name(), se::gigurra::aichallenge::games::go::Board::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_go_GameState(se::gigurra::aichallenge::games::go::GameState::_type_ids(), se::gigurra::aichallenge::games::go::GameState::_type_name(), se::gigurra::aichallenge::games::go::GameState::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_go_Move(se::gigurra::aichallenge::games::go::Move::_type_ids(), se::gigurra::aichallenge::games::go::Move::_type_name(), se::gigurra::aichallenge::games::go::Move::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_go_GoMessage(se::gigurra::aichallenge::games::go::GoMessage::_type_ids(), se::gigurra::aichallenge::games::go::GoMessage::_type_name(), se::gigurra::aichallenge::games::go::GoMessage::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_go_RequestFromServer(se::gigurra::aichallenge::games::go::RequestFromServer::_type_ids(), se::gigurra::aichallenge::games::go::RequestFromServer::_type_name(), se::gigurra::aichallenge::games::go::RequestFromServer::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_go_MoveRequest(se::gigurra::aichallenge::games::go::MoveRequest::_type_ids(), se::gigurra::aichallenge::games::go::MoveRequest::_type_name(), se::gigurra::aichallenge::games::go::MoveRequest::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_go_MakeMove(se::gigurra::aichallenge::games::go::MakeMove::_type_ids(), se::gigurra::aichallenge::games::go::MakeMove::_type_name(), se::gigurra::aichallenge::games::go::MakeMove::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_go_MoveResult(se::gigurra::aichallenge::games::go::MoveResult::_type_ids(), se::gigurra::aichallenge::games::go::MoveResult::_type_name(), se::gigurra::aichallenge::games::go::MoveResult::_newInstance);
	static const mgen::ClassRegistryEntry se_gigurra_aichallenge_games_go_GameOver(se::gigurra::aichallenge::games::go::GameOver::_type_ids(), se::gigurra::aichallenge::games::go::GameOver::_type_name(), se::gigurra::aichallenge::games::go::GameOver::_newInstance);

	std::size_t i = 0;
	switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
		case se::gigurra::aichallenge::Message::_type_id_16bit:
			switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
				case se::gigurra::aichallenge::GameMessage::_type_id_16bit:
					switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
						case se::gigurra::aichallenge::LeaveGame::_type_id_16bit:
							return &se_gigurra_aichallenge_LeaveGame;
							break;
						case se::gigurra::aichallenge::games::battleship::BattleshipMessage::_type_id_16bit:
							switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
								case se::gigurra::aichallenge::games::battleship::RequestFromServer::_type_id_16bit:
									switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
										case se::gigurra::aichallenge::games::battleship::PlaceShipsRequest::_type_id_16bit:
											return &se_gigurra_aichallenge_games_battleship_PlaceShipsRequest;
											break;
										case se::gigurra::aichallenge::games::battleship::MakeShotRequest::_type_id_16bit:
											return &se_gigurra_aichallenge_games_battleship_MakeShotRequest;
											break;
										default:
											return &se_gigurra_aichallenge_games_battleship_RequestFromServer;
											break;
									}
									break;
								case se::gigurra::aichallenge::games::battleship::PlaceShips::_type_id_16bit:
									return &se_gigurra_aichallenge_games_battleship_PlaceShips;
									break;
								case se::gigurra::aichallenge::games::battleship::MakeShot::_type_id_16bit:
									return &se_gigurra_aichallenge_games_battleship_MakeShot;
									break;
								case se::gigurra::aichallenge::games::battleship::ShotResult::_type_id_16bit:
									return &se_gigurra_aichallenge_games_battleship_ShotResult;
									break;
								case se::gigurra::aichallenge::games::battleship::GameOver::_type_id_16bit:
									return &se_gigurra_aichallenge_games_battleship_GameOver;
									break;
								default:
									return &se_gigurra_aichallenge_games_battleship_BattleshipMessage;
									break;
							}
							break;
						case se::gigurra::aichallenge::games::gomoku::GomokuMessage::_type_id_16bit:
							switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
								case se::gigurra::aichallenge::games::gomoku::RequestFromServer::_type_id_16bit:
									switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
										case se::gigurra::aichallenge::games::gomoku::MakeMoveRequest::_type_id_16bit:
											return &se_gigurra_aichallenge_games_gomoku_MakeMoveRequest;
											break;
										default:
											return &se_gigurra_aichallenge_games_gomoku_RequestFromServer;
											break;
									}
									break;
								case se::gigurra::aichallenge::games::gomoku::MakeMove::_type_id_16bit:
									return &se_gigurra_aichallenge_games_gomoku_MakeMove;
									break;
								case se::gigurra::aichallenge::games::gomoku::MoveMadeNotification::_type_id_16bit:
									return &se_gigurra_aichallenge_games_gomoku_MoveMadeNotification;
									break;
								case se::gigurra::aichallenge::games::gomoku::GameOver::_type_id_16bit:
									return &se_gigurra_aichallenge_games_gomoku_GameOver;
									break;
								default:
									return &se_gigurra_aichallenge_games_gomoku_GomokuMessage;
									break;
							}
							break;
						case se::gigurra::aichallenge::games::go::GoMessage::_type_id_16bit:
							switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
								case se::gigurra::aichallenge::games::go::RequestFromServer::_type_id_16bit:
									switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
										case se::gigurra::aichallenge::games::go::MoveRequest::_type_id_16bit:
											return &se_gigurra_aichallenge_games_go_MoveRequest;
											break;
										default:
											return &se_gigurra_aichallenge_games_go_RequestFromServer;
											break;
									}
									break;
								case se::gigurra::aichallenge::games::go::MakeMove::_type_id_16bit:
									return &se_gigurra_aichallenge_games_go_MakeMove;
									break;
								case se::gigurra::aichallenge::games::go::MoveResult::_type_id_16bit:
									return &se_gigurra_aichallenge_games_go_MoveResult;
									break;
								case se::gigurra::aichallenge::games::go::GameOver::_type_id_16bit:
									return &se_gigurra_aichallenge_games_go_GameOver;
									break;
								default:
									return &se_gigurra_aichallenge_games_go_GoMessage;
									break;
							}
							break;
						default:
							return &se_gigurra_aichallenge_GameMessage;
							break;
					}
					break;
				case se::gigurra::aichallenge::WelcomeMessage::_type_id_16bit:
					return &se_gigurra_aichallenge_WelcomeMessage;
					break;
				case se::gigurra::aichallenge::ErrorMessage::_type_id_16bit:
					return &se_gigurra_aichallenge_ErrorMessage;
					break;
				case se::gigurra::aichallenge::Checkin::_type_id_16bit:
					return &se_gigurra_aichallenge_Checkin;
					break;
				case se::gigurra::aichallenge::RestMessage::_type_id_16bit:
					switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
						case se::gigurra::aichallenge::RestCheckinReply::_type_id_16bit:
							return &se_gigurra_aichallenge_RestCheckinReply;
							break;
						case se::gigurra::aichallenge::RestListAvail::_type_id_16bit:
							return &se_gigurra_aichallenge_RestListAvail;
							break;
						case se::gigurra::aichallenge::RestPostOK::_type_id_16bit:
							return &se_gigurra_aichallenge_RestPostOK;
							break;
						case se::gigurra::aichallenge::RestGetAvail::_type_id_16bit:
							return &se_gigurra_aichallenge_RestGetAvail;
							break;
						case se::gigurra::aichallenge::RestListAvailReply::_type_id_16bit:
							return &se_gigurra_aichallenge_RestListAvailReply;
							break;
						case se::gigurra::aichallenge::RestGetMessagesReply::_type_id_16bit:
							return &se_gigurra_aichallenge_RestGetMessagesReply;
							break;
						case se::gigurra::aichallenge::RestGetScores::_type_id_16bit:
							return &se_gigurra_aichallenge_RestGetScores;
							break;
						case se::gigurra::aichallenge::RestGetScoresReply::_type_id_16bit:
							return &se_gigurra_aichallenge_RestGetScoresReply;
							break;
						default:
							return &se_gigurra_aichallenge_RestMessage;
							break;
					}
					break;
				case se::gigurra::aichallenge::PlayGame::_type_id_16bit:
					return &se_gigurra_aichallenge_PlayGame;
					break;
				case se::gigurra::aichallenge::GameChallengeFound::_type_id_16bit:
					return &se_gigurra_aichallenge_GameChallengeFound;
					break;
				default:
					return &se_gigurra_aichallenge_Message;
					break;
			}
			break;
		case se::gigurra::aichallenge::GamePlayed::_type_id_16bit:
			return &se_gigurra_aichallenge_GamePlayed;
			break;
		case se::gigurra::aichallenge::User::_type_id_16bit:
			return &se_gigurra_aichallenge_User;
			break;
		case se::gigurra::aichallenge::UserDb::_type_id_16bit:
			return &se_gigurra_aichallenge_UserDb;
			break;
		case se::gigurra::aichallenge::CmdLineArgs::_type_id_16bit:
			return &se_gigurra_aichallenge_CmdLineArgs;
			break;
		case se::gigurra::aichallenge::games::battleship::Ship::_type_id_16bit:
			return &se_gigurra_aichallenge_games_battleship_Ship;
			break;
		case se::gigurra::aichallenge::games::battleship::Segment::_type_id_16bit:
			return &se_gigurra_aichallenge_games_battleship_Segment;
			break;
		case se::gigurra::aichallenge::games::battleship::Player::_type_id_16bit:
			return &se_gigurra_aichallenge_games_battleship_Player;
			break;
		case se::gigurra::aichallenge::games::battleship::GameState::_type_id_16bit:
			return &se_gigurra_aichallenge_games_battleship_GameState;
			break;
		case se::gigurra::aichallenge::games::battleship::Vec2::_type_id_16bit:
			return &se_gigurra_aichallenge_games_battleship_Vec2;
			break;
		case se::gigurra::aichallenge::games::battleship::Shot::_type_id_16bit:
			return &se_gigurra_aichallenge_games_battleship_Shot;
			break;
		case se::gigurra::aichallenge::games::gomoku::Board::_type_id_16bit:
			return &se_gigurra_aichallenge_games_gomoku_Board;
			break;
		case se::gigurra::aichallenge::games::gomoku::Player::_type_id_16bit:
			return &se_gigurra_aichallenge_games_gomoku_Player;
			break;
		case se::gigurra::aichallenge::games::gomoku::GameState::_type_id_16bit:
			return &se_gigurra_aichallenge_games_gomoku_GameState;
			break;
		case se::gigurra::aichallenge::games::gomoku::Vec2::_type_id_16bit:
			return &se_gigurra_aichallenge_games_gomoku_Vec2;
			break;
		case se::gigurra::aichallenge::games::go::Vec2::_type_id_16bit:
			return &se_gigurra_aichallenge_games_go_Vec2;
			break;
		case se::gigurra::aichallenge::games::go::Player::_type_id_16bit:
			return &se_gigurra_aichallenge_games_go_Player;
			break;
		case se::gigurra::aichallenge::games::go::Group::_type_id_16bit:
			return &se_gigurra_aichallenge_games_go_Group;
			break;
		case se::gigurra::aichallenge::games::go::Board::_type_id_16bit:
			return &se_gigurra_aichallenge_games_go_Board;
			break;
		case se::gigurra::aichallenge::games::go::GameState::_type_id_16bit:
			return &se_gigurra_aichallenge_games_go_GameState;
			break;
		case se::gigurra::aichallenge::games::go::Move::_type_id_16bit:
			return &se_gigurra_aichallenge_games_go_Move;
			break;
		default:
			return 0;
			break;
	}
	return 0;
}

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

