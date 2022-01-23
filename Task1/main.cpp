#include <iostream>
#include "Game.h"
#include "GameComponent.h"
#include "DrawableGameComponent.h"

void initialising(){
	cout << "Initialising Game" << endl;
}

void terminating(){
	cout << "Terminating Game" << endl;
}

int main() {
	Game *newGame = new Game(2);
	newGame->SetInitialise(initialising);
	newGame->SetTerminate(terminating);

	newGame->Add(new GameComponent());
	newGame->Add(new DrawableGameComponent(0, 0));

	newGame->Run();
}
