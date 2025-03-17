#include "Pokemon.hpp"

struct BattleState {
    Pokemon *playerPokemon;  // Pointer to the player's Pokémon
    Pokemon *wildPokemon;    // Pointer to the wild Pokémon
    bool playerTurn;          // True if it's the player's turn, false otherwise
    bool battleOngoing;       // True if the battle is still ongoing
};