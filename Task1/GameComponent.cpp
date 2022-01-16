#include "GameComponent.h"

GameComponent::GameComponent(){
	id = instances;
}

GameComponent::~GameComponent() {

}

void GameComponent::Update(const tm*) {
	cout << "Object's id: " << id << "Time of invocation: " << endl;
}
