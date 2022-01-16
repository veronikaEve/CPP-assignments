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
	Game *newGame = new Game(5);
	newGame->SetInitialise(initialising);

	GameComponent *newGameComponent = new GameComponent;
	newGame->Add(newGameComponent);

	DrawableGameComponent *newDrawableGameComponent = new DrawableGameComponent(0, 0);
	newGame->Add(newDrawableGameComponent);

	newGame->Run();
	newGame->SetTerminate(terminating);

}

// what is maxComponent, and how am I supposed to use it?
// What are the UPPERCASE const variables for, and how/where would they be used? Should they be initialised?
// How to do that FP typedef? Did i do it right? I don't know what that actually is.
// tm is its own library, how am i supposed to use it as a pointer?

// x and y should be initialised to 0 in the constructor, but then i have to add new values when i make a new
// DrawableGameComponent? Like what's the point of having those parameters?
// What's the point of that?
