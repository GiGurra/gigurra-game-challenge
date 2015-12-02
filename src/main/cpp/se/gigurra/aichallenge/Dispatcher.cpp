/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "Dispatcher.h"
#include "ClassRegistry.h"

namespace se {
namespace gigurra {
namespace aichallenge {

void dispatch(mgen::MGenBase& object, se::gigurra::aichallenge::Handler& handler) {
	const std::vector<short>& ids = object._typeIds16Bit();
	std::size_t i = 0;
	switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
		case se::gigurra::aichallenge::Message::_type_id_16bit:
			switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
				case se::gigurra::aichallenge::GameMessage::_type_id_16bit:
					switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
						case se::gigurra::aichallenge::LeaveGame::_type_id_16bit:
							handler.handle(static_cast<se::gigurra::aichallenge::LeaveGame&>(object));
							break;
						case se::gigurra::aichallenge::games::battleship::BattleshipMessage::_type_id_16bit:
							switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
								case se::gigurra::aichallenge::games::battleship::RequestFromServer::_type_id_16bit:
									switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
										case se::gigurra::aichallenge::games::battleship::PlaceShipsRequest::_type_id_16bit:
											handler.handle(static_cast<se::gigurra::aichallenge::games::battleship::PlaceShipsRequest&>(object));
											break;
										case se::gigurra::aichallenge::games::battleship::MakeShotRequest::_type_id_16bit:
											handler.handle(static_cast<se::gigurra::aichallenge::games::battleship::MakeShotRequest&>(object));
											break;
										default:
											handler.handle(static_cast<se::gigurra::aichallenge::games::battleship::RequestFromServer&>(object));
											break;
									}
									break;
								case se::gigurra::aichallenge::games::battleship::PlaceShips::_type_id_16bit:
									handler.handle(static_cast<se::gigurra::aichallenge::games::battleship::PlaceShips&>(object));
									break;
								case se::gigurra::aichallenge::games::battleship::MakeShot::_type_id_16bit:
									handler.handle(static_cast<se::gigurra::aichallenge::games::battleship::MakeShot&>(object));
									break;
								case se::gigurra::aichallenge::games::battleship::ShotResult::_type_id_16bit:
									handler.handle(static_cast<se::gigurra::aichallenge::games::battleship::ShotResult&>(object));
									break;
								case se::gigurra::aichallenge::games::battleship::GameOver::_type_id_16bit:
									handler.handle(static_cast<se::gigurra::aichallenge::games::battleship::GameOver&>(object));
									break;
								default:
									handler.handle(static_cast<se::gigurra::aichallenge::games::battleship::BattleshipMessage&>(object));
									break;
							}
							break;
						case se::gigurra::aichallenge::games::gomoku::GomokuMessage::_type_id_16bit:
							switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
								case se::gigurra::aichallenge::games::gomoku::RequestFromServer::_type_id_16bit:
									switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
										case se::gigurra::aichallenge::games::gomoku::MakeMoveRequest::_type_id_16bit:
											handler.handle(static_cast<se::gigurra::aichallenge::games::gomoku::MakeMoveRequest&>(object));
											break;
										default:
											handler.handle(static_cast<se::gigurra::aichallenge::games::gomoku::RequestFromServer&>(object));
											break;
									}
									break;
								case se::gigurra::aichallenge::games::gomoku::MakeMove::_type_id_16bit:
									handler.handle(static_cast<se::gigurra::aichallenge::games::gomoku::MakeMove&>(object));
									break;
								case se::gigurra::aichallenge::games::gomoku::MoveMadeNotification::_type_id_16bit:
									handler.handle(static_cast<se::gigurra::aichallenge::games::gomoku::MoveMadeNotification&>(object));
									break;
								case se::gigurra::aichallenge::games::gomoku::GameOver::_type_id_16bit:
									handler.handle(static_cast<se::gigurra::aichallenge::games::gomoku::GameOver&>(object));
									break;
								default:
									handler.handle(static_cast<se::gigurra::aichallenge::games::gomoku::GomokuMessage&>(object));
									break;
							}
							break;
						case se::gigurra::aichallenge::games::go::GoMessage::_type_id_16bit:
							switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
								case se::gigurra::aichallenge::games::go::RequestFromServer::_type_id_16bit:
									switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
										case se::gigurra::aichallenge::games::go::MoveRequest::_type_id_16bit:
											handler.handle(static_cast<se::gigurra::aichallenge::games::go::MoveRequest&>(object));
											break;
										default:
											handler.handle(static_cast<se::gigurra::aichallenge::games::go::RequestFromServer&>(object));
											break;
									}
									break;
								case se::gigurra::aichallenge::games::go::MakeMove::_type_id_16bit:
									handler.handle(static_cast<se::gigurra::aichallenge::games::go::MakeMove&>(object));
									break;
								case se::gigurra::aichallenge::games::go::MoveResult::_type_id_16bit:
									handler.handle(static_cast<se::gigurra::aichallenge::games::go::MoveResult&>(object));
									break;
								case se::gigurra::aichallenge::games::go::GameOver::_type_id_16bit:
									handler.handle(static_cast<se::gigurra::aichallenge::games::go::GameOver&>(object));
									break;
								default:
									handler.handle(static_cast<se::gigurra::aichallenge::games::go::GoMessage&>(object));
									break;
							}
							break;
						default:
							handler.handle(static_cast<se::gigurra::aichallenge::GameMessage&>(object));
							break;
					}
					break;
				case se::gigurra::aichallenge::WelcomeMessage::_type_id_16bit:
					handler.handle(static_cast<se::gigurra::aichallenge::WelcomeMessage&>(object));
					break;
				case se::gigurra::aichallenge::ErrorMessage::_type_id_16bit:
					handler.handle(static_cast<se::gigurra::aichallenge::ErrorMessage&>(object));
					break;
				case se::gigurra::aichallenge::Checkin::_type_id_16bit:
					handler.handle(static_cast<se::gigurra::aichallenge::Checkin&>(object));
					break;
				case se::gigurra::aichallenge::RestMessage::_type_id_16bit:
					switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
						case se::gigurra::aichallenge::RestCheckinReply::_type_id_16bit:
							handler.handle(static_cast<se::gigurra::aichallenge::RestCheckinReply&>(object));
							break;
						case se::gigurra::aichallenge::RestListAvail::_type_id_16bit:
							handler.handle(static_cast<se::gigurra::aichallenge::RestListAvail&>(object));
							break;
						case se::gigurra::aichallenge::RestPostOK::_type_id_16bit:
							handler.handle(static_cast<se::gigurra::aichallenge::RestPostOK&>(object));
							break;
						case se::gigurra::aichallenge::RestGetAvail::_type_id_16bit:
							handler.handle(static_cast<se::gigurra::aichallenge::RestGetAvail&>(object));
							break;
						case se::gigurra::aichallenge::RestListAvailReply::_type_id_16bit:
							handler.handle(static_cast<se::gigurra::aichallenge::RestListAvailReply&>(object));
							break;
						case se::gigurra::aichallenge::RestGetMessagesReply::_type_id_16bit:
							handler.handle(static_cast<se::gigurra::aichallenge::RestGetMessagesReply&>(object));
							break;
						case se::gigurra::aichallenge::RestGetScores::_type_id_16bit:
							handler.handle(static_cast<se::gigurra::aichallenge::RestGetScores&>(object));
							break;
						case se::gigurra::aichallenge::RestGetScoresReply::_type_id_16bit:
							handler.handle(static_cast<se::gigurra::aichallenge::RestGetScoresReply&>(object));
							break;
						default:
							handler.handle(static_cast<se::gigurra::aichallenge::RestMessage&>(object));
							break;
					}
					break;
				case se::gigurra::aichallenge::PlayGame::_type_id_16bit:
					handler.handle(static_cast<se::gigurra::aichallenge::PlayGame&>(object));
					break;
				case se::gigurra::aichallenge::GameChallengeFound::_type_id_16bit:
					handler.handle(static_cast<se::gigurra::aichallenge::GameChallengeFound&>(object));
					break;
				default:
					handler.handle(static_cast<se::gigurra::aichallenge::Message&>(object));
					break;
			}
			break;
		case se::gigurra::aichallenge::GamePlayed::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::GamePlayed&>(object));
			break;
		case se::gigurra::aichallenge::User::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::User&>(object));
			break;
		case se::gigurra::aichallenge::UserDb::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::UserDb&>(object));
			break;
		case se::gigurra::aichallenge::CmdLineArgs::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::CmdLineArgs&>(object));
			break;
		case se::gigurra::aichallenge::games::battleship::Ship::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::games::battleship::Ship&>(object));
			break;
		case se::gigurra::aichallenge::games::battleship::Segment::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::games::battleship::Segment&>(object));
			break;
		case se::gigurra::aichallenge::games::battleship::Player::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::games::battleship::Player&>(object));
			break;
		case se::gigurra::aichallenge::games::battleship::GameState::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::games::battleship::GameState&>(object));
			break;
		case se::gigurra::aichallenge::games::battleship::Vec2::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::games::battleship::Vec2&>(object));
			break;
		case se::gigurra::aichallenge::games::battleship::Shot::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::games::battleship::Shot&>(object));
			break;
		case se::gigurra::aichallenge::games::gomoku::Board::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::games::gomoku::Board&>(object));
			break;
		case se::gigurra::aichallenge::games::gomoku::Player::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::games::gomoku::Player&>(object));
			break;
		case se::gigurra::aichallenge::games::gomoku::GameState::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::games::gomoku::GameState&>(object));
			break;
		case se::gigurra::aichallenge::games::gomoku::Vec2::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::games::gomoku::Vec2&>(object));
			break;
		case se::gigurra::aichallenge::games::go::Vec2::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::games::go::Vec2&>(object));
			break;
		case se::gigurra::aichallenge::games::go::Player::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::games::go::Player&>(object));
			break;
		case se::gigurra::aichallenge::games::go::Group::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::games::go::Group&>(object));
			break;
		case se::gigurra::aichallenge::games::go::Board::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::games::go::Board&>(object));
			break;
		case se::gigurra::aichallenge::games::go::GameState::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::games::go::GameState&>(object));
			break;
		case se::gigurra::aichallenge::games::go::Move::_type_id_16bit:
			handler.handle(static_cast<se::gigurra::aichallenge::games::go::Move&>(object));
			break;
		default:
			handler.handleUnknown(object);
			break;
	}
}

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

