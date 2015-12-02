/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package se.gigurra.aichallenge;

import se.culvertsoft.mgen.javapack.classes.MGenBase;

public class Dispatcher  {

	public static void dispatch(MGenBase o, Handler handler) {

		if (o==null) {
			handler.handleNull(o);
			return;
		}

		final short[] ids = o._typeIds16Bit();
		int i = 0;
		switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
			case se.gigurra.aichallenge.Message._TYPE_ID_16BIT:
				switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
					case se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT:
						switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
							case se.gigurra.aichallenge.LeaveGame._TYPE_ID_16BIT:
								handler.handle((se.gigurra.aichallenge.LeaveGame)o);
								break;
							case se.gigurra.aichallenge.games.battleship.BattleshipMessage._TYPE_ID_16BIT:
								switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
									case se.gigurra.aichallenge.games.battleship.RequestFromServer._TYPE_ID_16BIT:
										switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
											case se.gigurra.aichallenge.games.battleship.PlaceShipsRequest._TYPE_ID_16BIT:
												handler.handle((se.gigurra.aichallenge.games.battleship.PlaceShipsRequest)o);
												break;
											case se.gigurra.aichallenge.games.battleship.MakeShotRequest._TYPE_ID_16BIT:
												handler.handle((se.gigurra.aichallenge.games.battleship.MakeShotRequest)o);
												break;
											default:
												handler.handle((se.gigurra.aichallenge.games.battleship.RequestFromServer)o);
												break;
										}
										break;
									case se.gigurra.aichallenge.games.battleship.PlaceShips._TYPE_ID_16BIT:
										handler.handle((se.gigurra.aichallenge.games.battleship.PlaceShips)o);
										break;
									case se.gigurra.aichallenge.games.battleship.MakeShot._TYPE_ID_16BIT:
										handler.handle((se.gigurra.aichallenge.games.battleship.MakeShot)o);
										break;
									case se.gigurra.aichallenge.games.battleship.ShotResult._TYPE_ID_16BIT:
										handler.handle((se.gigurra.aichallenge.games.battleship.ShotResult)o);
										break;
									case se.gigurra.aichallenge.games.battleship.GameOver._TYPE_ID_16BIT:
										handler.handle((se.gigurra.aichallenge.games.battleship.GameOver)o);
										break;
									default:
										handler.handle((se.gigurra.aichallenge.games.battleship.BattleshipMessage)o);
										break;
								}
								break;
							case se.gigurra.aichallenge.games.gomoku.GomokuMessage._TYPE_ID_16BIT:
								switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
									case se.gigurra.aichallenge.games.gomoku.RequestFromServer._TYPE_ID_16BIT:
										switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
											case se.gigurra.aichallenge.games.gomoku.MakeMoveRequest._TYPE_ID_16BIT:
												handler.handle((se.gigurra.aichallenge.games.gomoku.MakeMoveRequest)o);
												break;
											default:
												handler.handle((se.gigurra.aichallenge.games.gomoku.RequestFromServer)o);
												break;
										}
										break;
									case se.gigurra.aichallenge.games.gomoku.MakeMove._TYPE_ID_16BIT:
										handler.handle((se.gigurra.aichallenge.games.gomoku.MakeMove)o);
										break;
									case se.gigurra.aichallenge.games.gomoku.MoveMadeNotification._TYPE_ID_16BIT:
										handler.handle((se.gigurra.aichallenge.games.gomoku.MoveMadeNotification)o);
										break;
									case se.gigurra.aichallenge.games.gomoku.GameOver._TYPE_ID_16BIT:
										handler.handle((se.gigurra.aichallenge.games.gomoku.GameOver)o);
										break;
									default:
										handler.handle((se.gigurra.aichallenge.games.gomoku.GomokuMessage)o);
										break;
								}
								break;
							case se.gigurra.aichallenge.games.go.GoMessage._TYPE_ID_16BIT:
								switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
									case se.gigurra.aichallenge.games.go.RequestFromServer._TYPE_ID_16BIT:
										switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
											case se.gigurra.aichallenge.games.go.MoveRequest._TYPE_ID_16BIT:
												handler.handle((se.gigurra.aichallenge.games.go.MoveRequest)o);
												break;
											default:
												handler.handle((se.gigurra.aichallenge.games.go.RequestFromServer)o);
												break;
										}
										break;
									case se.gigurra.aichallenge.games.go.MakeMove._TYPE_ID_16BIT:
										handler.handle((se.gigurra.aichallenge.games.go.MakeMove)o);
										break;
									case se.gigurra.aichallenge.games.go.MoveResult._TYPE_ID_16BIT:
										handler.handle((se.gigurra.aichallenge.games.go.MoveResult)o);
										break;
									case se.gigurra.aichallenge.games.go.GameOver._TYPE_ID_16BIT:
										handler.handle((se.gigurra.aichallenge.games.go.GameOver)o);
										break;
									default:
										handler.handle((se.gigurra.aichallenge.games.go.GoMessage)o);
										break;
								}
								break;
							default:
								handler.handle((se.gigurra.aichallenge.GameMessage)o);
								break;
						}
						break;
					case se.gigurra.aichallenge.WelcomeMessage._TYPE_ID_16BIT:
						handler.handle((se.gigurra.aichallenge.WelcomeMessage)o);
						break;
					case se.gigurra.aichallenge.ErrorMessage._TYPE_ID_16BIT:
						handler.handle((se.gigurra.aichallenge.ErrorMessage)o);
						break;
					case se.gigurra.aichallenge.Checkin._TYPE_ID_16BIT:
						handler.handle((se.gigurra.aichallenge.Checkin)o);
						break;
					case se.gigurra.aichallenge.RestMessage._TYPE_ID_16BIT:
						switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
							case se.gigurra.aichallenge.RestCheckinReply._TYPE_ID_16BIT:
								handler.handle((se.gigurra.aichallenge.RestCheckinReply)o);
								break;
							case se.gigurra.aichallenge.RestListAvail._TYPE_ID_16BIT:
								handler.handle((se.gigurra.aichallenge.RestListAvail)o);
								break;
							case se.gigurra.aichallenge.RestPostOK._TYPE_ID_16BIT:
								handler.handle((se.gigurra.aichallenge.RestPostOK)o);
								break;
							case se.gigurra.aichallenge.RestGetAvail._TYPE_ID_16BIT:
								handler.handle((se.gigurra.aichallenge.RestGetAvail)o);
								break;
							case se.gigurra.aichallenge.RestListAvailReply._TYPE_ID_16BIT:
								handler.handle((se.gigurra.aichallenge.RestListAvailReply)o);
								break;
							case se.gigurra.aichallenge.RestGetMessagesReply._TYPE_ID_16BIT:
								handler.handle((se.gigurra.aichallenge.RestGetMessagesReply)o);
								break;
							case se.gigurra.aichallenge.RestGetScores._TYPE_ID_16BIT:
								handler.handle((se.gigurra.aichallenge.RestGetScores)o);
								break;
							case se.gigurra.aichallenge.RestGetScoresReply._TYPE_ID_16BIT:
								handler.handle((se.gigurra.aichallenge.RestGetScoresReply)o);
								break;
							default:
								handler.handle((se.gigurra.aichallenge.RestMessage)o);
								break;
						}
						break;
					case se.gigurra.aichallenge.PlayGame._TYPE_ID_16BIT:
						handler.handle((se.gigurra.aichallenge.PlayGame)o);
						break;
					case se.gigurra.aichallenge.GameChallengeFound._TYPE_ID_16BIT:
						handler.handle((se.gigurra.aichallenge.GameChallengeFound)o);
						break;
					default:
						handler.handle((se.gigurra.aichallenge.Message)o);
						break;
				}
				break;
			case se.gigurra.aichallenge.GamePlayed._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.GamePlayed)o);
				break;
			case se.gigurra.aichallenge.User._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.User)o);
				break;
			case se.gigurra.aichallenge.UserDb._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.UserDb)o);
				break;
			case se.gigurra.aichallenge.CmdLineArgs._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.CmdLineArgs)o);
				break;
			case se.gigurra.aichallenge.games.battleship.Ship._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.games.battleship.Ship)o);
				break;
			case se.gigurra.aichallenge.games.battleship.Segment._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.games.battleship.Segment)o);
				break;
			case se.gigurra.aichallenge.games.battleship.Player._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.games.battleship.Player)o);
				break;
			case se.gigurra.aichallenge.games.battleship.GameState._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.games.battleship.GameState)o);
				break;
			case se.gigurra.aichallenge.games.battleship.Vec2._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.games.battleship.Vec2)o);
				break;
			case se.gigurra.aichallenge.games.battleship.Shot._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.games.battleship.Shot)o);
				break;
			case se.gigurra.aichallenge.games.gomoku.Board._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.games.gomoku.Board)o);
				break;
			case se.gigurra.aichallenge.games.gomoku.Player._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.games.gomoku.Player)o);
				break;
			case se.gigurra.aichallenge.games.gomoku.GameState._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.games.gomoku.GameState)o);
				break;
			case se.gigurra.aichallenge.games.gomoku.Vec2._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.games.gomoku.Vec2)o);
				break;
			case se.gigurra.aichallenge.games.go.Vec2._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.games.go.Vec2)o);
				break;
			case se.gigurra.aichallenge.games.go.Player._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.games.go.Player)o);
				break;
			case se.gigurra.aichallenge.games.go.Group._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.games.go.Group)o);
				break;
			case se.gigurra.aichallenge.games.go.Board._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.games.go.Board)o);
				break;
			case se.gigurra.aichallenge.games.go.GameState._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.games.go.GameState)o);
				break;
			case se.gigurra.aichallenge.games.go.Move._TYPE_ID_16BIT:
				handler.handle((se.gigurra.aichallenge.games.go.Move)o);
				break;
			default:
				handler.handleUnknown(o);
				break;
		}
	}

}
