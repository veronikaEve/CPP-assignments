#include "Game.h"

template<typename FP>
Game<FP>::Game(int maxComponents) {

}

template<typename FP>
Game<FP>::~Game() {

}

template<typename FP>
void Game<FP>::Add(GameComponent *) {

}

template<typename FP>
void Game<FP>::Run() {

}

template<typename FP>
void Game<FP>::SetInitialise(FP init) {
	Game::initialise = init;
}

template<typename FP>
void Game<FP>::SetTerminate(FP term) {
	Game::terminate = term;
}
