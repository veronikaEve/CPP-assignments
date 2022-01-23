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

//	GameComponent *newGameComponent = new GameComponent();
//	DrawableGameComponent *newerGameComponent = new DrawableGameComponent(3, 4);

//	newGame->Add(newGameComponent);
//	newGame->Add(newerGameComponent);
	newGame->Add(new GameComponent());
	newGame->Add(new DrawableGameComponent(2, 1));

	newGame->Run();

}
