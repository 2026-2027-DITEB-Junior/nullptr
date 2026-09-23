/**
 * Toast Engine (c) 2026
 * THIS IS AN INTERNAL FILE, DO NOT MODIFY UNLESS YOU KNOW WHAT YOU ARE DOING
 * THIS FILE SHOULD DECLARE A game_t* game_create(void) FOR THE CORRECT WORKING OF THE APPLICATION
 * THIS FILE SHOULD DECLARE A void game_destroy(game_t*) FOR THE CORRECT WORKING OF THE APPLICATION
 */

#include "game.h"
#include "../game.hpp"

game_t* game_create(void) {
	auto* game = new MafiaGame();
	toast::pushApplicationLayer(game);
	return reinterpret_cast<game_t*>(game);
}

void game_destroy(game_t* g) {
	auto game = reinterpret_cast<MafiaGame*>(g);
	toast::popApplicationLayer(game);
	delete game;
}
