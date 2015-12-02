/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_CLASSREGISTRY
#define SE_GIGURRA_AICHALLENGE_CLASSREGISTRY

#include "mgen/classes/ClassRegistryBase.h"
#include "se/gigurra/aichallenge/Message.h"
#include "se/gigurra/aichallenge/GameMessage.h"
#include "se/gigurra/aichallenge/LeaveGame.h"
#include "se/gigurra/aichallenge/WelcomeMessage.h"
#include "se/gigurra/aichallenge/ErrorMessage.h"
#include "se/gigurra/aichallenge/Checkin.h"
#include "se/gigurra/aichallenge/RestMessage.h"
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
#include "se/gigurra/aichallenge/games/battleship/BattleshipMessage.h"
#include "se/gigurra/aichallenge/games/battleship/RequestFromServer.h"
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
#include "se/gigurra/aichallenge/games/gomoku/GomokuMessage.h"
#include "se/gigurra/aichallenge/games/gomoku/RequestFromServer.h"
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
#include "se/gigurra/aichallenge/games/go/GoMessage.h"
#include "se/gigurra/aichallenge/games/go/RequestFromServer.h"
#include "se/gigurra/aichallenge/games/go/MoveRequest.h"
#include "se/gigurra/aichallenge/games/go/MakeMove.h"
#include "se/gigurra/aichallenge/games/go/MoveResult.h"
#include "se/gigurra/aichallenge/games/go/GameOver.h"

namespace se {
namespace gigurra {
namespace aichallenge {

class ClassRegistry : public mgen::ClassRegistryBase  {
public:

	ClassRegistry();
	virtual ~ClassRegistry();

	template<typename ContextType, typename ReaderType>
	void readObjectFields(mgen::MGenBase& o, ContextType& context, ReaderType& reader) const {

		const std::vector<short>& ids = o._typeIds16Bit();

		std::size_t i = 0;
		switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
			case se::gigurra::aichallenge::Message::_type_id_16bit:
				switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
					case se::gigurra::aichallenge::GameMessage::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case se::gigurra::aichallenge::LeaveGame::_type_id_16bit:
								reader.readFields(static_cast<se::gigurra::aichallenge::LeaveGame&>(o), context);
								break;
							case se::gigurra::aichallenge::games::battleship::BattleshipMessage::_type_id_16bit:
								switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
									case se::gigurra::aichallenge::games::battleship::RequestFromServer::_type_id_16bit:
										switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
											case se::gigurra::aichallenge::games::battleship::PlaceShipsRequest::_type_id_16bit:
												reader.readFields(static_cast<se::gigurra::aichallenge::games::battleship::PlaceShipsRequest&>(o), context);
												break;
											case se::gigurra::aichallenge::games::battleship::MakeShotRequest::_type_id_16bit:
												reader.readFields(static_cast<se::gigurra::aichallenge::games::battleship::MakeShotRequest&>(o), context);
												break;
											default:
												reader.readFields(static_cast<se::gigurra::aichallenge::games::battleship::RequestFromServer&>(o), context);
												break;
										}
										break;
									case se::gigurra::aichallenge::games::battleship::PlaceShips::_type_id_16bit:
										reader.readFields(static_cast<se::gigurra::aichallenge::games::battleship::PlaceShips&>(o), context);
										break;
									case se::gigurra::aichallenge::games::battleship::MakeShot::_type_id_16bit:
										reader.readFields(static_cast<se::gigurra::aichallenge::games::battleship::MakeShot&>(o), context);
										break;
									case se::gigurra::aichallenge::games::battleship::ShotResult::_type_id_16bit:
										reader.readFields(static_cast<se::gigurra::aichallenge::games::battleship::ShotResult&>(o), context);
										break;
									case se::gigurra::aichallenge::games::battleship::GameOver::_type_id_16bit:
										reader.readFields(static_cast<se::gigurra::aichallenge::games::battleship::GameOver&>(o), context);
										break;
									default:
										reader.readFields(static_cast<se::gigurra::aichallenge::games::battleship::BattleshipMessage&>(o), context);
										break;
								}
								break;
							case se::gigurra::aichallenge::games::gomoku::GomokuMessage::_type_id_16bit:
								switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
									case se::gigurra::aichallenge::games::gomoku::RequestFromServer::_type_id_16bit:
										switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
											case se::gigurra::aichallenge::games::gomoku::MakeMoveRequest::_type_id_16bit:
												reader.readFields(static_cast<se::gigurra::aichallenge::games::gomoku::MakeMoveRequest&>(o), context);
												break;
											default:
												reader.readFields(static_cast<se::gigurra::aichallenge::games::gomoku::RequestFromServer&>(o), context);
												break;
										}
										break;
									case se::gigurra::aichallenge::games::gomoku::MakeMove::_type_id_16bit:
										reader.readFields(static_cast<se::gigurra::aichallenge::games::gomoku::MakeMove&>(o), context);
										break;
									case se::gigurra::aichallenge::games::gomoku::MoveMadeNotification::_type_id_16bit:
										reader.readFields(static_cast<se::gigurra::aichallenge::games::gomoku::MoveMadeNotification&>(o), context);
										break;
									case se::gigurra::aichallenge::games::gomoku::GameOver::_type_id_16bit:
										reader.readFields(static_cast<se::gigurra::aichallenge::games::gomoku::GameOver&>(o), context);
										break;
									default:
										reader.readFields(static_cast<se::gigurra::aichallenge::games::gomoku::GomokuMessage&>(o), context);
										break;
								}
								break;
							case se::gigurra::aichallenge::games::go::GoMessage::_type_id_16bit:
								switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
									case se::gigurra::aichallenge::games::go::RequestFromServer::_type_id_16bit:
										switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
											case se::gigurra::aichallenge::games::go::MoveRequest::_type_id_16bit:
												reader.readFields(static_cast<se::gigurra::aichallenge::games::go::MoveRequest&>(o), context);
												break;
											default:
												reader.readFields(static_cast<se::gigurra::aichallenge::games::go::RequestFromServer&>(o), context);
												break;
										}
										break;
									case se::gigurra::aichallenge::games::go::MakeMove::_type_id_16bit:
										reader.readFields(static_cast<se::gigurra::aichallenge::games::go::MakeMove&>(o), context);
										break;
									case se::gigurra::aichallenge::games::go::MoveResult::_type_id_16bit:
										reader.readFields(static_cast<se::gigurra::aichallenge::games::go::MoveResult&>(o), context);
										break;
									case se::gigurra::aichallenge::games::go::GameOver::_type_id_16bit:
										reader.readFields(static_cast<se::gigurra::aichallenge::games::go::GameOver&>(o), context);
										break;
									default:
										reader.readFields(static_cast<se::gigurra::aichallenge::games::go::GoMessage&>(o), context);
										break;
								}
								break;
							default:
								reader.readFields(static_cast<se::gigurra::aichallenge::GameMessage&>(o), context);
								break;
						}
						break;
					case se::gigurra::aichallenge::WelcomeMessage::_type_id_16bit:
						reader.readFields(static_cast<se::gigurra::aichallenge::WelcomeMessage&>(o), context);
						break;
					case se::gigurra::aichallenge::ErrorMessage::_type_id_16bit:
						reader.readFields(static_cast<se::gigurra::aichallenge::ErrorMessage&>(o), context);
						break;
					case se::gigurra::aichallenge::Checkin::_type_id_16bit:
						reader.readFields(static_cast<se::gigurra::aichallenge::Checkin&>(o), context);
						break;
					case se::gigurra::aichallenge::RestMessage::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case se::gigurra::aichallenge::RestCheckinReply::_type_id_16bit:
								reader.readFields(static_cast<se::gigurra::aichallenge::RestCheckinReply&>(o), context);
								break;
							case se::gigurra::aichallenge::RestListAvail::_type_id_16bit:
								reader.readFields(static_cast<se::gigurra::aichallenge::RestListAvail&>(o), context);
								break;
							case se::gigurra::aichallenge::RestPostOK::_type_id_16bit:
								reader.readFields(static_cast<se::gigurra::aichallenge::RestPostOK&>(o), context);
								break;
							case se::gigurra::aichallenge::RestGetAvail::_type_id_16bit:
								reader.readFields(static_cast<se::gigurra::aichallenge::RestGetAvail&>(o), context);
								break;
							case se::gigurra::aichallenge::RestListAvailReply::_type_id_16bit:
								reader.readFields(static_cast<se::gigurra::aichallenge::RestListAvailReply&>(o), context);
								break;
							case se::gigurra::aichallenge::RestGetMessagesReply::_type_id_16bit:
								reader.readFields(static_cast<se::gigurra::aichallenge::RestGetMessagesReply&>(o), context);
								break;
							case se::gigurra::aichallenge::RestGetScores::_type_id_16bit:
								reader.readFields(static_cast<se::gigurra::aichallenge::RestGetScores&>(o), context);
								break;
							case se::gigurra::aichallenge::RestGetScoresReply::_type_id_16bit:
								reader.readFields(static_cast<se::gigurra::aichallenge::RestGetScoresReply&>(o), context);
								break;
							default:
								reader.readFields(static_cast<se::gigurra::aichallenge::RestMessage&>(o), context);
								break;
						}
						break;
					case se::gigurra::aichallenge::PlayGame::_type_id_16bit:
						reader.readFields(static_cast<se::gigurra::aichallenge::PlayGame&>(o), context);
						break;
					case se::gigurra::aichallenge::GameChallengeFound::_type_id_16bit:
						reader.readFields(static_cast<se::gigurra::aichallenge::GameChallengeFound&>(o), context);
						break;
					default:
						reader.readFields(static_cast<se::gigurra::aichallenge::Message&>(o), context);
						break;
				}
				break;
			case se::gigurra::aichallenge::GamePlayed::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::GamePlayed&>(o), context);
				break;
			case se::gigurra::aichallenge::User::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::User&>(o), context);
				break;
			case se::gigurra::aichallenge::UserDb::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::UserDb&>(o), context);
				break;
			case se::gigurra::aichallenge::CmdLineArgs::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::CmdLineArgs&>(o), context);
				break;
			case se::gigurra::aichallenge::games::battleship::Ship::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::games::battleship::Ship&>(o), context);
				break;
			case se::gigurra::aichallenge::games::battleship::Segment::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::games::battleship::Segment&>(o), context);
				break;
			case se::gigurra::aichallenge::games::battleship::Player::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::games::battleship::Player&>(o), context);
				break;
			case se::gigurra::aichallenge::games::battleship::GameState::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::games::battleship::GameState&>(o), context);
				break;
			case se::gigurra::aichallenge::games::battleship::Vec2::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::games::battleship::Vec2&>(o), context);
				break;
			case se::gigurra::aichallenge::games::battleship::Shot::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::games::battleship::Shot&>(o), context);
				break;
			case se::gigurra::aichallenge::games::gomoku::Board::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::games::gomoku::Board&>(o), context);
				break;
			case se::gigurra::aichallenge::games::gomoku::Player::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::games::gomoku::Player&>(o), context);
				break;
			case se::gigurra::aichallenge::games::gomoku::GameState::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::games::gomoku::GameState&>(o), context);
				break;
			case se::gigurra::aichallenge::games::gomoku::Vec2::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::games::gomoku::Vec2&>(o), context);
				break;
			case se::gigurra::aichallenge::games::go::Vec2::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::games::go::Vec2&>(o), context);
				break;
			case se::gigurra::aichallenge::games::go::Player::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::games::go::Player&>(o), context);
				break;
			case se::gigurra::aichallenge::games::go::Group::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::games::go::Group&>(o), context);
				break;
			case se::gigurra::aichallenge::games::go::Board::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::games::go::Board&>(o), context);
				break;
			case se::gigurra::aichallenge::games::go::GameState::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::games::go::GameState&>(o), context);
				break;
			case se::gigurra::aichallenge::games::go::Move::_type_id_16bit:
				reader.readFields(static_cast<se::gigurra::aichallenge::games::go::Move&>(o), context);
				break;
			default:
				return;
				break;
		}
		return;
	}

	template<typename VisitorType>
	void visitObject(mgen::MGenBase& o, VisitorType& visitor, const mgen::FieldVisitSelection selection) const {

		const std::vector<short>& ids = o._typeIds16Bit();

		std::size_t i = 0;
		switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
			case se::gigurra::aichallenge::Message::_type_id_16bit:
				switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
					case se::gigurra::aichallenge::GameMessage::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case se::gigurra::aichallenge::LeaveGame::_type_id_16bit:
								static_cast<se::gigurra::aichallenge::LeaveGame&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case se::gigurra::aichallenge::games::battleship::BattleshipMessage::_type_id_16bit:
								switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
									case se::gigurra::aichallenge::games::battleship::RequestFromServer::_type_id_16bit:
										switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
											case se::gigurra::aichallenge::games::battleship::PlaceShipsRequest::_type_id_16bit:
												static_cast<se::gigurra::aichallenge::games::battleship::PlaceShipsRequest&>(o)._accept<VisitorType>(visitor, selection);
												break;
											case se::gigurra::aichallenge::games::battleship::MakeShotRequest::_type_id_16bit:
												static_cast<se::gigurra::aichallenge::games::battleship::MakeShotRequest&>(o)._accept<VisitorType>(visitor, selection);
												break;
											default:
												static_cast<se::gigurra::aichallenge::games::battleship::RequestFromServer&>(o)._accept<VisitorType>(visitor, selection);
												break;
										}
										break;
									case se::gigurra::aichallenge::games::battleship::PlaceShips::_type_id_16bit:
										static_cast<se::gigurra::aichallenge::games::battleship::PlaceShips&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::gigurra::aichallenge::games::battleship::MakeShot::_type_id_16bit:
										static_cast<se::gigurra::aichallenge::games::battleship::MakeShot&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::gigurra::aichallenge::games::battleship::ShotResult::_type_id_16bit:
										static_cast<se::gigurra::aichallenge::games::battleship::ShotResult&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::gigurra::aichallenge::games::battleship::GameOver::_type_id_16bit:
										static_cast<se::gigurra::aichallenge::games::battleship::GameOver&>(o)._accept<VisitorType>(visitor, selection);
										break;
									default:
										static_cast<se::gigurra::aichallenge::games::battleship::BattleshipMessage&>(o)._accept<VisitorType>(visitor, selection);
										break;
								}
								break;
							case se::gigurra::aichallenge::games::gomoku::GomokuMessage::_type_id_16bit:
								switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
									case se::gigurra::aichallenge::games::gomoku::RequestFromServer::_type_id_16bit:
										switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
											case se::gigurra::aichallenge::games::gomoku::MakeMoveRequest::_type_id_16bit:
												static_cast<se::gigurra::aichallenge::games::gomoku::MakeMoveRequest&>(o)._accept<VisitorType>(visitor, selection);
												break;
											default:
												static_cast<se::gigurra::aichallenge::games::gomoku::RequestFromServer&>(o)._accept<VisitorType>(visitor, selection);
												break;
										}
										break;
									case se::gigurra::aichallenge::games::gomoku::MakeMove::_type_id_16bit:
										static_cast<se::gigurra::aichallenge::games::gomoku::MakeMove&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::gigurra::aichallenge::games::gomoku::MoveMadeNotification::_type_id_16bit:
										static_cast<se::gigurra::aichallenge::games::gomoku::MoveMadeNotification&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::gigurra::aichallenge::games::gomoku::GameOver::_type_id_16bit:
										static_cast<se::gigurra::aichallenge::games::gomoku::GameOver&>(o)._accept<VisitorType>(visitor, selection);
										break;
									default:
										static_cast<se::gigurra::aichallenge::games::gomoku::GomokuMessage&>(o)._accept<VisitorType>(visitor, selection);
										break;
								}
								break;
							case se::gigurra::aichallenge::games::go::GoMessage::_type_id_16bit:
								switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
									case se::gigurra::aichallenge::games::go::RequestFromServer::_type_id_16bit:
										switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
											case se::gigurra::aichallenge::games::go::MoveRequest::_type_id_16bit:
												static_cast<se::gigurra::aichallenge::games::go::MoveRequest&>(o)._accept<VisitorType>(visitor, selection);
												break;
											default:
												static_cast<se::gigurra::aichallenge::games::go::RequestFromServer&>(o)._accept<VisitorType>(visitor, selection);
												break;
										}
										break;
									case se::gigurra::aichallenge::games::go::MakeMove::_type_id_16bit:
										static_cast<se::gigurra::aichallenge::games::go::MakeMove&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::gigurra::aichallenge::games::go::MoveResult::_type_id_16bit:
										static_cast<se::gigurra::aichallenge::games::go::MoveResult&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::gigurra::aichallenge::games::go::GameOver::_type_id_16bit:
										static_cast<se::gigurra::aichallenge::games::go::GameOver&>(o)._accept<VisitorType>(visitor, selection);
										break;
									default:
										static_cast<se::gigurra::aichallenge::games::go::GoMessage&>(o)._accept<VisitorType>(visitor, selection);
										break;
								}
								break;
							default:
								static_cast<se::gigurra::aichallenge::GameMessage&>(o)._accept<VisitorType>(visitor, selection);
								break;
						}
						break;
					case se::gigurra::aichallenge::WelcomeMessage::_type_id_16bit:
						static_cast<se::gigurra::aichallenge::WelcomeMessage&>(o)._accept<VisitorType>(visitor, selection);
						break;
					case se::gigurra::aichallenge::ErrorMessage::_type_id_16bit:
						static_cast<se::gigurra::aichallenge::ErrorMessage&>(o)._accept<VisitorType>(visitor, selection);
						break;
					case se::gigurra::aichallenge::Checkin::_type_id_16bit:
						static_cast<se::gigurra::aichallenge::Checkin&>(o)._accept<VisitorType>(visitor, selection);
						break;
					case se::gigurra::aichallenge::RestMessage::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case se::gigurra::aichallenge::RestCheckinReply::_type_id_16bit:
								static_cast<se::gigurra::aichallenge::RestCheckinReply&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case se::gigurra::aichallenge::RestListAvail::_type_id_16bit:
								static_cast<se::gigurra::aichallenge::RestListAvail&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case se::gigurra::aichallenge::RestPostOK::_type_id_16bit:
								static_cast<se::gigurra::aichallenge::RestPostOK&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case se::gigurra::aichallenge::RestGetAvail::_type_id_16bit:
								static_cast<se::gigurra::aichallenge::RestGetAvail&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case se::gigurra::aichallenge::RestListAvailReply::_type_id_16bit:
								static_cast<se::gigurra::aichallenge::RestListAvailReply&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case se::gigurra::aichallenge::RestGetMessagesReply::_type_id_16bit:
								static_cast<se::gigurra::aichallenge::RestGetMessagesReply&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case se::gigurra::aichallenge::RestGetScores::_type_id_16bit:
								static_cast<se::gigurra::aichallenge::RestGetScores&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case se::gigurra::aichallenge::RestGetScoresReply::_type_id_16bit:
								static_cast<se::gigurra::aichallenge::RestGetScoresReply&>(o)._accept<VisitorType>(visitor, selection);
								break;
							default:
								static_cast<se::gigurra::aichallenge::RestMessage&>(o)._accept<VisitorType>(visitor, selection);
								break;
						}
						break;
					case se::gigurra::aichallenge::PlayGame::_type_id_16bit:
						static_cast<se::gigurra::aichallenge::PlayGame&>(o)._accept<VisitorType>(visitor, selection);
						break;
					case se::gigurra::aichallenge::GameChallengeFound::_type_id_16bit:
						static_cast<se::gigurra::aichallenge::GameChallengeFound&>(o)._accept<VisitorType>(visitor, selection);
						break;
					default:
						static_cast<se::gigurra::aichallenge::Message&>(o)._accept<VisitorType>(visitor, selection);
						break;
				}
				break;
			case se::gigurra::aichallenge::GamePlayed::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::GamePlayed&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::User::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::User&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::UserDb::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::UserDb&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::CmdLineArgs::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::CmdLineArgs&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::battleship::Ship::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::games::battleship::Ship&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::battleship::Segment::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::games::battleship::Segment&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::battleship::Player::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::games::battleship::Player&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::battleship::GameState::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::games::battleship::GameState&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::battleship::Vec2::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::games::battleship::Vec2&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::battleship::Shot::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::games::battleship::Shot&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::gomoku::Board::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::games::gomoku::Board&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::gomoku::Player::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::games::gomoku::Player&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::gomoku::GameState::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::games::gomoku::GameState&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::gomoku::Vec2::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::games::gomoku::Vec2&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::go::Vec2::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::games::go::Vec2&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::go::Player::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::games::go::Player&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::go::Group::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::games::go::Group&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::go::Board::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::games::go::Board&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::go::GameState::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::games::go::GameState&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::go::Move::_type_id_16bit:
				static_cast<se::gigurra::aichallenge::games::go::Move&>(o)._accept<VisitorType>(visitor, selection);
				break;
			default:
				return;
				break;
		}
		return;
	}

	template<typename VisitorType>
	void visitObject(const mgen::MGenBase& o, VisitorType& visitor, const mgen::FieldVisitSelection selection) const {

		const std::vector<short>& ids = o._typeIds16Bit();

		std::size_t i = 0;
		switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
			case se::gigurra::aichallenge::Message::_type_id_16bit:
				switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
					case se::gigurra::aichallenge::GameMessage::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case se::gigurra::aichallenge::LeaveGame::_type_id_16bit:
								static_cast<const se::gigurra::aichallenge::LeaveGame&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case se::gigurra::aichallenge::games::battleship::BattleshipMessage::_type_id_16bit:
								switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
									case se::gigurra::aichallenge::games::battleship::RequestFromServer::_type_id_16bit:
										switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
											case se::gigurra::aichallenge::games::battleship::PlaceShipsRequest::_type_id_16bit:
												static_cast<const se::gigurra::aichallenge::games::battleship::PlaceShipsRequest&>(o)._accept<VisitorType>(visitor, selection);
												break;
											case se::gigurra::aichallenge::games::battleship::MakeShotRequest::_type_id_16bit:
												static_cast<const se::gigurra::aichallenge::games::battleship::MakeShotRequest&>(o)._accept<VisitorType>(visitor, selection);
												break;
											default:
												static_cast<const se::gigurra::aichallenge::games::battleship::RequestFromServer&>(o)._accept<VisitorType>(visitor, selection);
												break;
										}
										break;
									case se::gigurra::aichallenge::games::battleship::PlaceShips::_type_id_16bit:
										static_cast<const se::gigurra::aichallenge::games::battleship::PlaceShips&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::gigurra::aichallenge::games::battleship::MakeShot::_type_id_16bit:
										static_cast<const se::gigurra::aichallenge::games::battleship::MakeShot&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::gigurra::aichallenge::games::battleship::ShotResult::_type_id_16bit:
										static_cast<const se::gigurra::aichallenge::games::battleship::ShotResult&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::gigurra::aichallenge::games::battleship::GameOver::_type_id_16bit:
										static_cast<const se::gigurra::aichallenge::games::battleship::GameOver&>(o)._accept<VisitorType>(visitor, selection);
										break;
									default:
										static_cast<const se::gigurra::aichallenge::games::battleship::BattleshipMessage&>(o)._accept<VisitorType>(visitor, selection);
										break;
								}
								break;
							case se::gigurra::aichallenge::games::gomoku::GomokuMessage::_type_id_16bit:
								switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
									case se::gigurra::aichallenge::games::gomoku::RequestFromServer::_type_id_16bit:
										switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
											case se::gigurra::aichallenge::games::gomoku::MakeMoveRequest::_type_id_16bit:
												static_cast<const se::gigurra::aichallenge::games::gomoku::MakeMoveRequest&>(o)._accept<VisitorType>(visitor, selection);
												break;
											default:
												static_cast<const se::gigurra::aichallenge::games::gomoku::RequestFromServer&>(o)._accept<VisitorType>(visitor, selection);
												break;
										}
										break;
									case se::gigurra::aichallenge::games::gomoku::MakeMove::_type_id_16bit:
										static_cast<const se::gigurra::aichallenge::games::gomoku::MakeMove&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::gigurra::aichallenge::games::gomoku::MoveMadeNotification::_type_id_16bit:
										static_cast<const se::gigurra::aichallenge::games::gomoku::MoveMadeNotification&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::gigurra::aichallenge::games::gomoku::GameOver::_type_id_16bit:
										static_cast<const se::gigurra::aichallenge::games::gomoku::GameOver&>(o)._accept<VisitorType>(visitor, selection);
										break;
									default:
										static_cast<const se::gigurra::aichallenge::games::gomoku::GomokuMessage&>(o)._accept<VisitorType>(visitor, selection);
										break;
								}
								break;
							case se::gigurra::aichallenge::games::go::GoMessage::_type_id_16bit:
								switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
									case se::gigurra::aichallenge::games::go::RequestFromServer::_type_id_16bit:
										switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
											case se::gigurra::aichallenge::games::go::MoveRequest::_type_id_16bit:
												static_cast<const se::gigurra::aichallenge::games::go::MoveRequest&>(o)._accept<VisitorType>(visitor, selection);
												break;
											default:
												static_cast<const se::gigurra::aichallenge::games::go::RequestFromServer&>(o)._accept<VisitorType>(visitor, selection);
												break;
										}
										break;
									case se::gigurra::aichallenge::games::go::MakeMove::_type_id_16bit:
										static_cast<const se::gigurra::aichallenge::games::go::MakeMove&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::gigurra::aichallenge::games::go::MoveResult::_type_id_16bit:
										static_cast<const se::gigurra::aichallenge::games::go::MoveResult&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::gigurra::aichallenge::games::go::GameOver::_type_id_16bit:
										static_cast<const se::gigurra::aichallenge::games::go::GameOver&>(o)._accept<VisitorType>(visitor, selection);
										break;
									default:
										static_cast<const se::gigurra::aichallenge::games::go::GoMessage&>(o)._accept<VisitorType>(visitor, selection);
										break;
								}
								break;
							default:
								static_cast<const se::gigurra::aichallenge::GameMessage&>(o)._accept<VisitorType>(visitor, selection);
								break;
						}
						break;
					case se::gigurra::aichallenge::WelcomeMessage::_type_id_16bit:
						static_cast<const se::gigurra::aichallenge::WelcomeMessage&>(o)._accept<VisitorType>(visitor, selection);
						break;
					case se::gigurra::aichallenge::ErrorMessage::_type_id_16bit:
						static_cast<const se::gigurra::aichallenge::ErrorMessage&>(o)._accept<VisitorType>(visitor, selection);
						break;
					case se::gigurra::aichallenge::Checkin::_type_id_16bit:
						static_cast<const se::gigurra::aichallenge::Checkin&>(o)._accept<VisitorType>(visitor, selection);
						break;
					case se::gigurra::aichallenge::RestMessage::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case se::gigurra::aichallenge::RestCheckinReply::_type_id_16bit:
								static_cast<const se::gigurra::aichallenge::RestCheckinReply&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case se::gigurra::aichallenge::RestListAvail::_type_id_16bit:
								static_cast<const se::gigurra::aichallenge::RestListAvail&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case se::gigurra::aichallenge::RestPostOK::_type_id_16bit:
								static_cast<const se::gigurra::aichallenge::RestPostOK&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case se::gigurra::aichallenge::RestGetAvail::_type_id_16bit:
								static_cast<const se::gigurra::aichallenge::RestGetAvail&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case se::gigurra::aichallenge::RestListAvailReply::_type_id_16bit:
								static_cast<const se::gigurra::aichallenge::RestListAvailReply&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case se::gigurra::aichallenge::RestGetMessagesReply::_type_id_16bit:
								static_cast<const se::gigurra::aichallenge::RestGetMessagesReply&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case se::gigurra::aichallenge::RestGetScores::_type_id_16bit:
								static_cast<const se::gigurra::aichallenge::RestGetScores&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case se::gigurra::aichallenge::RestGetScoresReply::_type_id_16bit:
								static_cast<const se::gigurra::aichallenge::RestGetScoresReply&>(o)._accept<VisitorType>(visitor, selection);
								break;
							default:
								static_cast<const se::gigurra::aichallenge::RestMessage&>(o)._accept<VisitorType>(visitor, selection);
								break;
						}
						break;
					case se::gigurra::aichallenge::PlayGame::_type_id_16bit:
						static_cast<const se::gigurra::aichallenge::PlayGame&>(o)._accept<VisitorType>(visitor, selection);
						break;
					case se::gigurra::aichallenge::GameChallengeFound::_type_id_16bit:
						static_cast<const se::gigurra::aichallenge::GameChallengeFound&>(o)._accept<VisitorType>(visitor, selection);
						break;
					default:
						static_cast<const se::gigurra::aichallenge::Message&>(o)._accept<VisitorType>(visitor, selection);
						break;
				}
				break;
			case se::gigurra::aichallenge::GamePlayed::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::GamePlayed&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::User::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::User&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::UserDb::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::UserDb&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::CmdLineArgs::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::CmdLineArgs&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::battleship::Ship::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::games::battleship::Ship&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::battleship::Segment::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::games::battleship::Segment&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::battleship::Player::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::games::battleship::Player&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::battleship::GameState::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::games::battleship::GameState&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::battleship::Vec2::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::games::battleship::Vec2&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::battleship::Shot::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::games::battleship::Shot&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::gomoku::Board::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::games::gomoku::Board&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::gomoku::Player::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::games::gomoku::Player&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::gomoku::GameState::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::games::gomoku::GameState&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::gomoku::Vec2::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::games::gomoku::Vec2&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::go::Vec2::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::games::go::Vec2&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::go::Player::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::games::go::Player&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::go::Group::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::games::go::Group&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::go::Board::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::games::go::Board&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::go::GameState::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::games::go::GameState&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::gigurra::aichallenge::games::go::Move::_type_id_16bit:
				static_cast<const se::gigurra::aichallenge::games::go::Move&>(o)._accept<VisitorType>(visitor, selection);
				break;
			default:
				return;
				break;
		}
		return;
	}

	const mgen::ClassRegistryEntry * getByIds(const std::vector<short>& ids) const;

	const mgen::ClassRegistryEntry * getByIds(const std::vector<std::string>& base64ids_vector) const {
		return mgen::ClassRegistryBase::getByIds(base64ids_vector);
	}

	const mgen::ClassRegistryEntry * getByIds(const std::string& base64ids_concatenated) const {
		return mgen::ClassRegistryBase::getByIds(base64ids_concatenated);
	}

}; // End class ClassRegistry

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

#endif
