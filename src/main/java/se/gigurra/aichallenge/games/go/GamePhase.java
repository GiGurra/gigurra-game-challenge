/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package se.gigurra.aichallenge.games.go;

import se.culvertsoft.mgen.api.model.RuntimeEnumType;
import se.culvertsoft.mgen.javapack.classes.MGenEnum;

public enum GamePhase implements MGenEnum {
	JOINING(0, "JOINING"),
	PLAYING(1, "PLAYING"),
	GAME_OVER(2, "GAME_OVER"),
	UNKNOWN(3, "UNKNOWN");

	final int m_intValue;
	final String m_stringValue;

	GamePhase(final int intValue, final String stringValue) {
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

	public static final RuntimeEnumType _TYPE = new RuntimeEnumType("GamePhase", "se.gigurra.aichallenge.games.go.GamePhase") {

		@Override
		public Enum<?> get(final String entryStringName) {
			switch(entryStringName) {
				case "JOINING":
					return JOINING;
				case "PLAYING":
					return PLAYING;
				case "GAME_OVER":
					return GAME_OVER;
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
					return JOINING;
				case 1:
					return PLAYING;
				case 2:
					return GAME_OVER;
				case 3:
					return UNKNOWN;
				default:
					return UNKNOWN;
			}
		}

	};
}
