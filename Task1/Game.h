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
	const int TICKS_1000MS = 1; // the sleep() function takes seconds as a parameter, so using this as milliseconds
	// didn't make much sense. I still assigned it the value of one for consistency of the assignment, but it
	// represents one second as a whole

public:
	Game(int maxComponents);
	~Game();

	void Add(GameComponent*);
	void Run();
	void SetInitialise(FP init);
	void SetTerminate(FP term);
};


#endif //TASK1_GAME_H
