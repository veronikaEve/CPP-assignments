#include "GameComponent.h"
int GameComponent::instances = 0;

GameComponent::GameComponent(){
	instances++;
	id = instances;
}

GameComponent::~GameComponent() {

}

void GameComponent::Update(const tm* eventTime) {
	cout << "ID: " << this->id << " Time: " <<  asctime(eventTime);
}
