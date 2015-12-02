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

public class Handler  {

	protected void handleDiscard(MGenBase o) {}

	protected void handleNull(MGenBase o) { handleDiscard(o); }

	protected void handleUnknown(MGenBase o) { handleDiscard(o); }

	protected void handle(se.gigurra.aichallenge.Message o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.GameMessage o) {
		handle((se.gigurra.aichallenge.Message)o);
	}

	protected void handle(se.gigurra.aichallenge.LeaveGame o) {
		handle((se.gigurra.aichallenge.GameMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.WelcomeMessage o) {
		handle((se.gigurra.aichallenge.Message)o);
	}

	protected void handle(se.gigurra.aichallenge.ErrorMessage o) {
		handle((se.gigurra.aichallenge.Message)o);
	}

	protected void handle(se.gigurra.aichallenge.Checkin o) {
		handle((se.gigurra.aichallenge.Message)o);
	}

	protected void handle(se.gigurra.aichallenge.RestMessage o) {
		handle((se.gigurra.aichallenge.Message)o);
	}

	protected void handle(se.gigurra.aichallenge.RestCheckinReply o) {
		handle((se.gigurra.aichallenge.RestMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.RestListAvail o) {
		handle((se.gigurra.aichallenge.RestMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.RestPostOK o) {
		handle((se.gigurra.aichallenge.RestMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.RestGetAvail o) {
		handle((se.gigurra.aichallenge.RestMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.RestListAvailReply o) {
		handle((se.gigurra.aichallenge.RestMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.RestGetMessagesReply o) {
		handle((se.gigurra.aichallenge.RestMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.RestGetScores o) {
		handle((se.gigurra.aichallenge.RestMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.RestGetScoresReply o) {
		handle((se.gigurra.aichallenge.RestMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.PlayGame o) {
		handle((se.gigurra.aichallenge.Message)o);
	}

	protected void handle(se.gigurra.aichallenge.GameChallengeFound o) {
		handle((se.gigurra.aichallenge.Message)o);
	}

	protected void handle(se.gigurra.aichallenge.GamePlayed o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.User o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.UserDb o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.CmdLineArgs o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.battleship.Ship o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.battleship.Segment o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.battleship.Player o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.battleship.GameState o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.battleship.Vec2 o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.battleship.Shot o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.battleship.BattleshipMessage o) {
		handle((se.gigurra.aichallenge.GameMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.games.battleship.RequestFromServer o) {
		handle((se.gigurra.aichallenge.games.battleship.BattleshipMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.games.battleship.PlaceShipsRequest o) {
		handle((se.gigurra.aichallenge.games.battleship.RequestFromServer)o);
	}

	protected void handle(se.gigurra.aichallenge.games.battleship.PlaceShips o) {
		handle((se.gigurra.aichallenge.games.battleship.BattleshipMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.games.battleship.MakeShotRequest o) {
		handle((se.gigurra.aichallenge.games.battleship.RequestFromServer)o);
	}

	protected void handle(se.gigurra.aichallenge.games.battleship.MakeShot o) {
		handle((se.gigurra.aichallenge.games.battleship.BattleshipMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.games.battleship.ShotResult o) {
		handle((se.gigurra.aichallenge.games.battleship.BattleshipMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.games.battleship.GameOver o) {
		handle((se.gigurra.aichallenge.games.battleship.BattleshipMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.games.gomoku.Board o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.gomoku.Player o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.gomoku.GameState o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.gomoku.Vec2 o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.gomoku.GomokuMessage o) {
		handle((se.gigurra.aichallenge.GameMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.games.gomoku.RequestFromServer o) {
		handle((se.gigurra.aichallenge.games.gomoku.GomokuMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.games.gomoku.MakeMoveRequest o) {
		handle((se.gigurra.aichallenge.games.gomoku.RequestFromServer)o);
	}

	protected void handle(se.gigurra.aichallenge.games.gomoku.MakeMove o) {
		handle((se.gigurra.aichallenge.games.gomoku.GomokuMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.games.gomoku.MoveMadeNotification o) {
		handle((se.gigurra.aichallenge.games.gomoku.GomokuMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.games.gomoku.GameOver o) {
		handle((se.gigurra.aichallenge.games.gomoku.GomokuMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.games.go.Vec2 o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.go.Player o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.go.Group o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.go.Board o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.go.GameState o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.go.Move o) {
		handleDiscard(o);
	}

	protected void handle(se.gigurra.aichallenge.games.go.GoMessage o) {
		handle((se.gigurra.aichallenge.GameMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.games.go.RequestFromServer o) {
		handle((se.gigurra.aichallenge.games.go.GoMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.games.go.MoveRequest o) {
		handle((se.gigurra.aichallenge.games.go.RequestFromServer)o);
	}

	protected void handle(se.gigurra.aichallenge.games.go.MakeMove o) {
		handle((se.gigurra.aichallenge.games.go.GoMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.games.go.MoveResult o) {
		handle((se.gigurra.aichallenge.games.go.GoMessage)o);
	}

	protected void handle(se.gigurra.aichallenge.games.go.GameOver o) {
		handle((se.gigurra.aichallenge.games.go.GoMessage)o);
	}

}
