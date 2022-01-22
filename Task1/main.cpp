#include <iostream>
#include "Game.h"
#include "GameComponent.h"
#include "DrawableGameComponent.h"

using namespace std;

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

	GameComponent *newGameComponent = new GameComponent;
	newGame->Add(newGameComponent);

	DrawableGameComponent *newDrawableGameComponent = new DrawableGameComponent(3, 4);
	newGame->Add(newDrawableGameComponent);

	newGame->Run();

}
