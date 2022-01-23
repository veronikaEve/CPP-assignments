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
			// TODO: Still need to put this in a loop that gets called every second 5 times.
			time_t rawtime;
			struct tm *timeinfo;
			time(&rawtime);
			timeinfo = localtime(&rawtime);

			this->components[i]->Update(timeinfo);
		}
	terminate();
}

void Game::SetInitialise(FP init) {
	Game::initialise = init;
}

void Game::SetTerminate(FP term) {
	Game::terminate = term;
}
