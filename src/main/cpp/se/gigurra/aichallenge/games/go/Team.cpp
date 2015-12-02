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
namespace go {

static std::map<std::string, Team> _mk_Team_enum_lkup_map() {
	std::map<std::string, Team> out;
	out["O"] = Team_O;
	out["W"] = Team_W;
	out["B"] = Team_B;
	out["UNKNOWN"] = Team_UNKNOWN;
	return out;
}

static std::vector<Team> _mk_Team_enum_values() {
	std::vector<Team> out;
	out.push_back(Team_O);
	out.push_back(Team_W);
	out.push_back(Team_B);
	out.push_back(Team_UNKNOWN);
	return out;
}

static std::vector<std::string> _mk_Team_enum_names() {
	std::vector<std::string> out;
	out.push_back("O");
	out.push_back("W");
	out.push_back("B");
	out.push_back("UNKNOWN");
	return out;
}

} // End namespace go
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

namespace mgen {

const std::vector<se::gigurra::aichallenge::games::go::Team>& get_enum_values(const se::gigurra::aichallenge::games::go::Team /* type_evidence */) {
	static const std::vector<se::gigurra::aichallenge::games::go::Team> out = se::gigurra::aichallenge::games::go::_mk_Team_enum_values();
	return out;
}

se::gigurra::aichallenge::games::go::Team get_enum_value(const se::gigurra::aichallenge::games::go::Team /* type_evidence */, const std::string& enumName) {
	static const std::map<std::string, se::gigurra::aichallenge::games::go::Team> lkup = se::gigurra::aichallenge::games::go::_mk_Team_enum_lkup_map();
	std::map<std::string, se::gigurra::aichallenge::games::go::Team>::const_iterator it = lkup.find(enumName);
	return it != lkup.end() ? it->second : se::gigurra::aichallenge::games::go::Team_UNKNOWN;
}

const std::vector<std::string>& get_enum_names(const se::gigurra::aichallenge::games::go::Team /* type_evidence */) {
	static const std::vector<std::string> out = se::gigurra::aichallenge::games::go::_mk_Team_enum_names();
	return out;
}

const std::string& get_enum_name(const se::gigurra::aichallenge::games::go::Team enumValue) {
	const static std::string O_name("O");
	const static std::string W_name("W");
	const static std::string B_name("B");
	const static std::string UNKNOWN_name("UNKNOWN");
	switch (enumValue) {
		case se::gigurra::aichallenge::games::go::Team_O:
			return O_name;
		case se::gigurra::aichallenge::games::go::Team_W:
			return W_name;
		case se::gigurra::aichallenge::games::go::Team_B:
			return B_name;
		case se::gigurra::aichallenge::games::go::Team_UNKNOWN:
			return UNKNOWN_name;
		default:
			return UNKNOWN_name;
	}
}

} // End namespace mgen

