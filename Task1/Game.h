#ifndef TASK1_GAME_H
#define TASK1_GAME_H

#include <ctime>
#include "GameComponent.h"

typedef void(*FP)();

class Game {
private:
	int componentCount;
	GameComponent** components;

	FP initialise;
	FP terminate;
	const int TICKS_1000MS = 1000;

public:
	Game(int maxComponents);
	~Game();

	void Add(GameComponent* g);
	void Run();
	void SetInitialise(FP init);
	void SetTerminate(FP term);
};


#endif //TASK1_GAME_H
