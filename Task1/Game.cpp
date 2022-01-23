#include <unistd.h>
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

	for (int j = 0; j < 5; ++j) {
		sleep(TICKS_1000MS);

		for (int i = 0; i < componentCount; ++i) {
			time_t rawtime;
			struct tm *timeinfo;
			time(&rawtime);
			timeinfo = localtime(&rawtime);

			this->components[i]->Update(timeinfo);
		}
	}

	terminate();
}

void Game::SetInitialise(FP init) {
	Game::initialise = init;
}

void Game::SetTerminate(FP term) {
	Game::terminate = term;
}
