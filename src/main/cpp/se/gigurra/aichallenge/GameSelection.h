/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_GAMESELECTION
#define SE_GIGURRA_AICHALLENGE_GAMESELECTION

#include "mgen/classes/MGenBase.h"

namespace se {
namespace gigurra {
namespace aichallenge {

enum GameSelection {
	GameSelection_BATTLESHIP = 0,
	GameSelection_GOMOKU = 1,
	GameSelection_CHESS = 2,
	GameSelection_GO = 3,
	GameSelection_UNKNOWN = 4
};

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

namespace mgen {

const std::vector<se::gigurra::aichallenge::GameSelection>& get_enum_values(const se::gigurra::aichallenge::GameSelection /* type_evidence */);
se::gigurra::aichallenge::GameSelection get_enum_value(const se::gigurra::aichallenge::GameSelection /* type_evidence */, const std::string& enumName);

const std::vector<std::string>& get_enum_names(const se::gigurra::aichallenge::GameSelection /* type_evidence */);
const std::string& get_enum_name(const se::gigurra::aichallenge::GameSelection enumValue);

} // End namespace mgen

#endif
