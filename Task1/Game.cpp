#include "Game.h"

Game::Game(int maxComponents) : TICKS_1000MS(1000) {

}

Game::~Game() {

}

void Game::Add(GameComponent *) {
	components[componentCount];
}

void Game::Run() {
	initialise();
	for (int i = 0; i < componentCount; ++i) {
//		components[i]->Update();
		cout << "WHAAAAAAAA" << endl;
	}
	terminate();
}

void Game::SetInitialise(FP init) {
	Game::initialise = init;
}

void Game::SetTerminate(FP term) {
	Game::terminate = term;
}
