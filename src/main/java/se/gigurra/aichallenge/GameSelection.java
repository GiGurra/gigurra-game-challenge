/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package se.gigurra.aichallenge;

import se.culvertsoft.mgen.api.model.RuntimeEnumType;
import se.culvertsoft.mgen.javapack.classes.MGenEnum;

public enum GameSelection implements MGenEnum {
	BATTLESHIP(0, "BATTLESHIP"),
	GOMOKU(1, "GOMOKU"),
	CHESS(2, "CHESS"),
	GO(3, "GO"),
	UNKNOWN(4, "UNKNOWN");

	final int m_intValue;
	final String m_stringValue;

	GameSelection(final int intValue, final String stringValue) {
		m_intValue = intValue;
		m_stringValue = stringValue;
	}

	@Override
	public int getIntValue() {
		return m_intValue;
	}

	@Override
	public String getStringValue() {
		return m_stringValue;
	}

	public static final RuntimeEnumType _TYPE = new RuntimeEnumType("GameSelection", "se.gigurra.aichallenge.GameSelection") {

		@Override
		public Enum<?> get(final String entryStringName) {
			switch(entryStringName) {
				case "BATTLESHIP":
					return BATTLESHIP;
				case "GOMOKU":
					return GOMOKU;
				case "CHESS":
					return CHESS;
				case "GO":
					return GO;
				case "UNKNOWN":
					return UNKNOWN;
				default:
					return UNKNOWN;
			}
		}

		@Override
		public Enum<?> get(final int entryIntValue) {
			switch(entryIntValue) {
				case 0:
					return BATTLESHIP;
				case 1:
					return GOMOKU;
				case 2:
					return CHESS;
				case 3:
					return GO;
				case 4:
					return UNKNOWN;
				default:
					return UNKNOWN;
			}
		}

	};
}
