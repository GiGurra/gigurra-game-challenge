/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "GamePhase.h"
#include <map>

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace go {

static std::map<std::string, GamePhase> _mk_GamePhase_enum_lkup_map() {
	std::map<std::string, GamePhase> out;
	out["JOINING"] = GamePhase_JOINING;
	out["PLAYING"] = GamePhase_PLAYING;
	out["GAME_OVER"] = GamePhase_GAME_OVER;
	out["UNKNOWN"] = GamePhase_UNKNOWN;
	return out;
}

static std::vector<GamePhase> _mk_GamePhase_enum_values() {
	std::vector<GamePhase> out;
	out.push_back(GamePhase_JOINING);
	out.push_back(GamePhase_PLAYING);
	out.push_back(GamePhase_GAME_OVER);
	out.push_back(GamePhase_UNKNOWN);
	return out;
}

static std::vector<std::string> _mk_GamePhase_enum_names() {
	std::vector<std::string> out;
	out.push_back("JOINING");
	out.push_back("PLAYING");
	out.push_back("GAME_OVER");
	out.push_back("UNKNOWN");
	return out;
}

} // End namespace go
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

namespace mgen {

const std::vector<se::gigurra::aichallenge::games::go::GamePhase>& get_enum_values(const se::gigurra::aichallenge::games::go::GamePhase /* type_evidence */) {
	static const std::vector<se::gigurra::aichallenge::games::go::GamePhase> out = se::gigurra::aichallenge::games::go::_mk_GamePhase_enum_values();
	return out;
}

se::gigurra::aichallenge::games::go::GamePhase get_enum_value(const se::gigurra::aichallenge::games::go::GamePhase /* type_evidence */, const std::string& enumName) {
	static const std::map<std::string, se::gigurra::aichallenge::games::go::GamePhase> lkup = se::gigurra::aichallenge::games::go::_mk_GamePhase_enum_lkup_map();
	std::map<std::string, se::gigurra::aichallenge::games::go::GamePhase>::const_iterator it = lkup.find(enumName);
	return it != lkup.end() ? it->second : se::gigurra::aichallenge::games::go::GamePhase_UNKNOWN;
}

const std::vector<std::string>& get_enum_names(const se::gigurra::aichallenge::games::go::GamePhase /* type_evidence */) {
	static const std::vector<std::string> out = se::gigurra::aichallenge::games::go::_mk_GamePhase_enum_names();
	return out;
}

const std::string& get_enum_name(const se::gigurra::aichallenge::games::go::GamePhase enumValue) {
	const static std::string JOINING_name("JOINING");
	const static std::string PLAYING_name("PLAYING");
	const static std::string GAME_OVER_name("GAME_OVER");
	const static std::string UNKNOWN_name("UNKNOWN");
	switch (enumValue) {
		case se::gigurra::aichallenge::games::go::GamePhase_JOINING:
			return JOINING_name;
		case se::gigurra::aichallenge::games::go::GamePhase_PLAYING:
			return PLAYING_name;
		case se::gigurra::aichallenge::games::go::GamePhase_GAME_OVER:
			return GAME_OVER_name;
		case se::gigurra::aichallenge::games::go::GamePhase_UNKNOWN:
			return UNKNOWN_name;
		default:
			return UNKNOWN_name;
	}
}

} // End namespace mgen

