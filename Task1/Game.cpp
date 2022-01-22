#include "Game.h"

Game::Game(int maxComponents) {
	components = new GameComponent*[maxComponents];
	componentCount = 0;
}

Game::~Game() {

}

void Game::Add(GameComponent* g) {
	components[componentCount] = g;
	componentCount++;
}

void Game::Run() {
	initialise();
	for (int i = 0; i < componentCount; ++i) {
		time_t rawtime;
		struct tm *timeinfo;
		time(&rawtime);
		timeinfo = localtime(&rawtime);

		components[i]->Update(timeinfo);
		cout << "WHAAAAAAAA" << i << endl;
	}
	terminate();
}

void Game::SetInitialise(FP init) {
	Game::initialise = init;
}

void Game::SetTerminate(FP term) {
	Game::terminate = term;
}
