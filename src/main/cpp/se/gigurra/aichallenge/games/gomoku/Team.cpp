/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "Team.h"
#include <map>

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace gomoku {

static std::map<std::string, Team> _mk_Team_enum_lkup_map() {
	std::map<std::string, Team> out;
	out["RED"] = Team_RED;
	out["BLUE"] = Team_BLUE;
	out["UNKNOWN"] = Team_UNKNOWN;
	return out;
}

static std::vector<Team> _mk_Team_enum_values() {
	std::vector<Team> out;
	out.push_back(Team_RED);
	out.push_back(Team_BLUE);
	out.push_back(Team_UNKNOWN);
	return out;
}

static std::vector<std::string> _mk_Team_enum_names() {
	std::vector<std::string> out;
	out.push_back("RED");
	out.push_back("BLUE");
	out.push_back("UNKNOWN");
	return out;
}

} // End namespace gomoku
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

namespace mgen {

const std::vector<se::gigurra::aichallenge::games::gomoku::Team>& get_enum_values(const se::gigurra::aichallenge::games::gomoku::Team /* type_evidence */) {
	static const std::vector<se::gigurra::aichallenge::games::gomoku::Team> out = se::gigurra::aichallenge::games::gomoku::_mk_Team_enum_values();
	return out;
}

se::gigurra::aichallenge::games::gomoku::Team get_enum_value(const se::gigurra::aichallenge::games::gomoku::Team /* type_evidence */, const std::string& enumName) {
	static const std::map<std::string, se::gigurra::aichallenge::games::gomoku::Team> lkup = se::gigurra::aichallenge::games::gomoku::_mk_Team_enum_lkup_map();
	std::map<std::string, se::gigurra::aichallenge::games::gomoku::Team>::const_iterator it = lkup.find(enumName);
	return it != lkup.end() ? it->second : se::gigurra::aichallenge::games::gomoku::Team_UNKNOWN;
}

const std::vector<std::string>& get_enum_names(const se::gigurra::aichallenge::games::gomoku::Team /* type_evidence */) {
	static const std::vector<std::string> out = se::gigurra::aichallenge::games::gomoku::_mk_Team_enum_names();
	return out;
}

const std::string& get_enum_name(const se::gigurra::aichallenge::games::gomoku::Team enumValue) {
	const static std::string RED_name("RED");
	const static std::string BLUE_name("BLUE");
	const static std::string UNKNOWN_name("UNKNOWN");
	switch (enumValue) {
		case se::gigurra::aichallenge::games::gomoku::Team_RED:
			return RED_name;
		case se::gigurra::aichallenge::games::gomoku::Team_BLUE:
			return BLUE_name;
		case se::gigurra::aichallenge::games::gomoku::Team_UNKNOWN:
			return UNKNOWN_name;
		default:
			return UNKNOWN_name;
	}
}

} // End namespace mgen

