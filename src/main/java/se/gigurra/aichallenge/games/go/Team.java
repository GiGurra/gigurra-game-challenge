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

public enum Team implements MGenEnum {
	O(0, "O"),
	W(1, "W"),
	B(2, "B"),
	UNKNOWN(3, "UNKNOWN");

	final int m_intValue;
	final String m_stringValue;

	Team(final int intValue, final String stringValue) {
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

	public static final RuntimeEnumType _TYPE = new RuntimeEnumType("Team", "se.gigurra.aichallenge.games.go.Team") {

		@Override
		public Enum<?> get(final String entryStringName) {
			switch(entryStringName) {
				case "O":
					return O;
				case "W":
					return W;
				case "B":
					return B;
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
					return O;
				case 1:
					return W;
				case 2:
					return B;
				case 3:
					return UNKNOWN;
				default:
					return UNKNOWN;
			}
		}

	};
}
