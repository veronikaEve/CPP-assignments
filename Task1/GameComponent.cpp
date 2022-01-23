#include "GameComponent.h"
int GameComponent::instances = 0;

GameComponent::GameComponent(){
	instances++;
	id = instances;
}

GameComponent::~GameComponent() {

}

void GameComponent::Update(const tm* eventTime) {
	cout << "Object's id: " << this->id << " Time of invocation: " <<  asctime(eventTime) << endl;
}
