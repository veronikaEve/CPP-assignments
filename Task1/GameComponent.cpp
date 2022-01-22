#include "GameComponent.h"

GameComponent::GameComponent(){
	id = instances;
}

GameComponent::~GameComponent() {

}

void GameComponent::Update(const tm* time) {
	cout << "Object's id: " << id << " Time of invocation: " <<  asctime(time) << endl;
}
