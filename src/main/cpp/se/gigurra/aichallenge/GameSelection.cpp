/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "GameSelection.h"
#include <map>

namespace se {
namespace gigurra {
namespace aichallenge {

static std::map<std::string, GameSelection> _mk_GameSelection_enum_lkup_map() {
	std::map<std::string, GameSelection> out;
	out["BATTLESHIP"] = GameSelection_BATTLESHIP;
	out["GOMOKU"] = GameSelection_GOMOKU;
	out["CHESS"] = GameSelection_CHESS;
	out["GO"] = GameSelection_GO;
	out["UNKNOWN"] = GameSelection_UNKNOWN;
	return out;
}

static std::vector<GameSelection> _mk_GameSelection_enum_values() {
	std::vector<GameSelection> out;
	out.push_back(GameSelection_BATTLESHIP);
	out.push_back(GameSelection_GOMOKU);
	out.push_back(GameSelection_CHESS);
	out.push_back(GameSelection_GO);
	out.push_back(GameSelection_UNKNOWN);
	return out;
}

static std::vector<std::string> _mk_GameSelection_enum_names() {
	std::vector<std::string> out;
	out.push_back("BATTLESHIP");
	out.push_back("GOMOKU");
	out.push_back("CHESS");
	out.push_back("GO");
	out.push_back("UNKNOWN");
	return out;
}

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

namespace mgen {

const std::vector<se::gigurra::aichallenge::GameSelection>& get_enum_values(const se::gigurra::aichallenge::GameSelection /* type_evidence */) {
	static const std::vector<se::gigurra::aichallenge::GameSelection> out = se::gigurra::aichallenge::_mk_GameSelection_enum_values();
	return out;
}

se::gigurra::aichallenge::GameSelection get_enum_value(const se::gigurra::aichallenge::GameSelection /* type_evidence */, const std::string& enumName) {
	static const std::map<std::string, se::gigurra::aichallenge::GameSelection> lkup = se::gigurra::aichallenge::_mk_GameSelection_enum_lkup_map();
	std::map<std::string, se::gigurra::aichallenge::GameSelection>::const_iterator it = lkup.find(enumName);
	return it != lkup.end() ? it->second : se::gigurra::aichallenge::GameSelection_UNKNOWN;
}

const std::vector<std::string>& get_enum_names(const se::gigurra::aichallenge::GameSelection /* type_evidence */) {
	static const std::vector<std::string> out = se::gigurra::aichallenge::_mk_GameSelection_enum_names();
	return out;
}

const std::string& get_enum_name(const se::gigurra::aichallenge::GameSelection enumValue) {
	const static std::string BATTLESHIP_name("BATTLESHIP");
	const static std::string GOMOKU_name("GOMOKU");
	const static std::string CHESS_name("CHESS");
	const static std::string GO_name("GO");
	const static std::string UNKNOWN_name("UNKNOWN");
	switch (enumValue) {
		case se::gigurra::aichallenge::GameSelection_BATTLESHIP:
			return BATTLESHIP_name;
		case se::gigurra::aichallenge::GameSelection_GOMOKU:
			return GOMOKU_name;
		case se::gigurra::aichallenge::GameSelection_CHESS:
			return CHESS_name;
		case se::gigurra::aichallenge::GameSelection_GO:
			return GO_name;
		case se::gigurra::aichallenge::GameSelection_UNKNOWN:
			return UNKNOWN_name;
		default:
			return UNKNOWN_name;
	}
}

} // End namespace mgen

