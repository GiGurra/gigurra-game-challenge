/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_GAMES_GOMOKU_GAMEPHASE
#define SE_GIGURRA_AICHALLENGE_GAMES_GOMOKU_GAMEPHASE

#include "mgen/classes/MGenBase.h"

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace gomoku {

enum GamePhase {
	GamePhase_JOINING = 0,
	GamePhase_PLAYING = 1,
	GamePhase_GAME_OVER = 2,
	GamePhase_UNKNOWN = 3
};

} // End namespace gomoku
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

namespace mgen {

const std::vector<se::gigurra::aichallenge::games::gomoku::GamePhase>& get_enum_values(const se::gigurra::aichallenge::games::gomoku::GamePhase /* type_evidence */);
se::gigurra::aichallenge::games::gomoku::GamePhase get_enum_value(const se::gigurra::aichallenge::games::gomoku::GamePhase /* type_evidence */, const std::string& enumName);

const std::vector<std::string>& get_enum_names(const se::gigurra::aichallenge::games::gomoku::GamePhase /* type_evidence */);
const std::string& get_enum_name(const se::gigurra::aichallenge::games::gomoku::GamePhase enumValue);

} // End namespace mgen

#endif
