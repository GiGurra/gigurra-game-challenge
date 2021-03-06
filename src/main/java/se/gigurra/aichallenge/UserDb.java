/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package se.gigurra.aichallenge;

import se.culvertsoft.mgen.api.model.Field;
import se.culvertsoft.mgen.javapack.metadata.FieldSetDepth;
import se.culvertsoft.mgen.javapack.metadata.FieldVisitSelection;
import se.culvertsoft.mgen.javapack.serialization.FieldVisitor;
import se.culvertsoft.mgen.javapack.serialization.Reader;
import se.culvertsoft.mgen.javapack.util.FieldHasher;
import se.culvertsoft.mgen.javapack.util.EqualityTester;
import se.culvertsoft.mgen.javapack.util.Validator;
import se.culvertsoft.mgen.javapack.util.Marker;
/* custom_imports_begin *//* custom_imports_end */

public class UserDb extends se.culvertsoft.mgen.javapack.classes.MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private java.util.Map<String, User> m_users;
	private java.util.List<GamePlayed> m_games;

	public UserDb() {
		super();
		m_users = new java.util.HashMap<String, User>();
		m_games = new java.util.ArrayList<GamePlayed>();
	}

	public UserDb(final java.util.Map<String, User> users,
				final java.util.List<GamePlayed> games) {
		m_users = users;
		m_games = games;
	}

	public java.util.Map<String, User> getUsers() {
		return m_users;
	}

	public java.util.List<GamePlayed> getGames() {
		return m_games;
	}

	public boolean hasUsers() {
		return _isUsersSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasGames() {
		return _isGamesSet(FieldSetDepth.SHALLOW);
	}

	public UserDb unsetUsers() {
		_setUsersSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public UserDb unsetGames() {
		_setGamesSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public java.util.Map<String, User> getUsersCopy() {
		java.util.Map<String, User> out = null;
		final java.util.Map<String, User> var0 = getUsers();
		if (var0 != null) {
			out = new java.util.HashMap<String, User>(var0.size());
			for (final java.util.Map.Entry<String, User> var1 : var0.entrySet()) {
				String var2 = null;
				User var3 = null;
				var2 = var1.getKey();
				final User var5 = var1.getValue();
				if (var5 != null) {
					var3 = var5.deepCopy();
				} else {
					var3 = null;
				}
				out.put(var2, var3);
			}
		} else {
			out = null;
		}
		return out;
	}

	public java.util.List<GamePlayed> getGamesCopy() {
		java.util.List<GamePlayed> out = null;
		final java.util.List<GamePlayed> var0 = getGames();
		if (var0 != null) {
			out = new java.util.ArrayList<GamePlayed>(var0.size());
			for (final GamePlayed var1 : var0) {
				GamePlayed var2 = null;
				final GamePlayed var3 = var1;
				if (var3 != null) {
					var2 = var3.deepCopy();
				} else {
					var2 = null;
				}
				out.add(var2);
			}
		} else {
			out = null;
		}
		return out;
	}

	public UserDb setUsers(final java.util.Map<String, User> users) {
		m_users = users;
		return this;
	}

	public UserDb setGames(final java.util.List<GamePlayed> games) {
		m_games = games;
		return this;
	}

	/* custom_methods_begin */
	
	public boolean login(final String userName, final String password) {
		if (m_users.containsKey(userName)) {
			return m_users.get(userName).getPassword().equals(password);
		} else {
			final User user = new User();
			user.setName(userName);
			user.setPassword(password);
			m_users.put(userName, user);
			return true;
		}
	}

	public boolean login(final Checkin checkin) {
		return login(checkin.getUsername(), checkin.getPassword());
	}
	
	public void handleGamePlayed(final GamePlayed result) {	
		m_games.add(result);
	}
	
	/* custom_methods_end */

	@Override
	public String toString() {
		return se.culvertsoft.mgen.javapack.util.Stringifyer.toString(this);
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = -1863700171;
		result = _isUsersSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getUsers(), _users_METADATA.typ())) : result;
		result = _isGamesSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getGames(), _games_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (UserDb.class != other.getClass()) return false;
		final UserDb o = (UserDb)other;
		return true
		  && hasUsers() == o.hasUsers()
		  && hasGames() == o.hasGames()
		  && EqualityTester.areEqual(getUsers(), o.getUsers(), _users_METADATA.typ())
		  && EqualityTester.areEqual(getGames(), o.getGames(), _games_METADATA.typ());
	}

	@Override
	public UserDb deepCopy() {
		final UserDb out = new UserDb(
			getUsersCopy(),
			getGamesCopy());
		return out;
	}


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                    TYPE METADATA ACCESS AND SERIALIZATION METHODS                    *****
           *****          (accessed primarily by (de-)serializers and for ORM functionality)          *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  

	@Override
	public long _typeId() {
		return _TYPE_ID;
	}

	@Override
	public short _typeId16Bit() {
		return _TYPE_ID_16BIT;
	}

	@Override
	public String _typeId16BitBase64() {
		return _TYPE_ID_16BIT_BASE64;
	}

	@Override
	public String _typeName() {
		return _TYPE_NAME;
	}

	@Override
	public long[] _typeIds() {
		return _TYPE_IDS;
	}

	@Override
	public short[] _typeIds16Bit() {
		return _TYPE_IDS_16BIT;
	}

	@Override
	public String[] _typeIds16BitBase64() {
		return _TYPE_IDS_16BIT_BASE64;
	}

	@Override
	public String _typeIds16BitBase64String() {
		return _TYPE_IDS_16BIT_BASE64_STRING;
	}

	@Override
	public String[] _typeNames() {
		return _TYPE_NAMES;
	}

	@Override
	public void _accept(final FieldVisitor visitor, final FieldVisitSelection selection) throws java.io.IOException {
		switch(selection) {
			case ALL: {
				visitor.beginVisit(this, 2);
				visitor.visit(getUsers(), _users_METADATA);
				visitor.visit(getGames(), _games_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isUsersSet(FieldSetDepth.SHALLOW))
					visitor.visit(getUsers(), _users_METADATA);
				if (_isGamesSet(FieldSetDepth.SHALLOW))
					visitor.visit(getGames(), _games_METADATA);
				visitor.endVisit();
				break;
			}
		}
	}

	@SuppressWarnings("unchecked")
	@Override
	public boolean _readField(final short fieldId,
	                         final Object context,
	                         final Reader reader) throws java.io.IOException {
		switch(fieldId) {
			case (_users_ID):
				setUsers((java.util.Map<String, User>)reader.readMapField(_users_METADATA, context));
				return true;
			case (_games_ID):
				setGames((java.util.List<GamePlayed>)reader.readListField(_games_METADATA, context));
				return true;
			default:
				reader.handleUnknownField(null, context);
				return false;
		}
	}

	@Override
	public Field[] _fields() {
		return _FIELDS;
	}

	public boolean _isUsersSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_users != null;
		} else {
			return m_users != null && Validator.validateFieldDeep(getUsers(), _users_METADATA.typ());
		}
	}

	public boolean _isGamesSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_games != null;
		} else {
			return m_games != null && Validator.validateFieldDeep(getGames(), _games_METADATA.typ());
		}
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_users_ID):
				return _isUsersSet(depth);
			case (_games_ID):
				return _isGamesSet(depth);
			default:
				return false;
		}
	}

	public UserDb _setUsersSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_users = m_users != null ? m_users : new java.util.HashMap<String, User>();
		else
			m_users = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getUsers(), _users_METADATA.typ());
		return this;
	}

	public UserDb _setGamesSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_games = m_games != null ? m_games : new java.util.ArrayList<GamePlayed>();
		else
			m_games = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getGames(), _games_METADATA.typ());
		return this;
	}

	public UserDb _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setUsersSet(state, depth);
		_setGamesSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isUsersSet(FieldSetDepth.SHALLOW) || _isUsersSet(FieldSetDepth.DEEP))
				&& (!_isGamesSet(FieldSetDepth.SHALLOW) || _isGamesSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isUsersSet(depth) ? 1 : 0;
		out += _isGamesSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_users_ID):
				return _users_METADATA;
			case (_games_ID):
				return _games_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("users"):
				return _users_METADATA;
			case ("games"):
				return _games_METADATA;
			default:
				return null;
		}
	}


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                                    TYPE METADATA                                     *****
           *****             (generally speaking, it's a bad idea to edit this manually)              *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  

	public static final long _TYPE_ID = 7303451540181597977L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.UserDb._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 6980;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.UserDb._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "G0Q";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.UserDb._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.UserDb._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.UserDb";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.UserDb._TYPE_NAME };

	public static final Field _users_METADATA = new Field("se.gigurra.aichallenge.UserDb", "users", new se.culvertsoft.mgen.api.model.MapType(se.culvertsoft.mgen.api.model.StringType.INSTANCE, new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.User", 1870692920178448898L)), null, (short)-23008);
	public static final Field _games_METADATA = new Field("se.gigurra.aichallenge.UserDb", "games", new se.culvertsoft.mgen.api.model.ListType(new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.GamePlayed", 2600061850285819111L)), null, (short)9075);

	public static final short _users_ID = (short)-23008;
	public static final short _games_ID = (short)9075;

	public static final Field[] _FIELDS = { _users_METADATA, _games_METADATA };

}
