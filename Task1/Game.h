#ifndef TASK1_GAME_H
#define TASK1_GAME_H

#include "GameComponent.h"

template<typename FP>
class Game {
private:
	int componentCount;
	GameComponent** components;

	FP initialise;
	FP terminate;
	const int TICKS_1000MS;

public:
	Game(int maxComponents);
	~Game();

	void Add(GameComponent*);
	void Run();
	void SetInitialise(FP init);
	void SetTerminate(FP term);


};


#endif //TASK1_GAME_H
