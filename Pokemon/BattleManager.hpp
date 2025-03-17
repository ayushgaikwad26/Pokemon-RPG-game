
#include "Pokemon.hpp"
#include "Player.hpp"

class BattleManager {
public:
    void startBattle(Player &player, Pokemon &wildPokemon);
private:
    void battle(Pokemon &playerPokemon, Pokemon &wildPokemon);
    void handleBattleOutcome(Player &player, bool playerWon);
    
    void BattleManager::startBattle(Player &player, Pokemon &wildPokemon) {
        std::cout << "A wild " << wildPokemon.name << " appeared!\n";
            battle(player.chosenPokemon, wildPokemon);
} 
};