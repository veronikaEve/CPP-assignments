#include "GameComponent.h"

GameComponent::GameComponent(){
		id = instances;
	cout << "GameComponent constructor called once " << instances << endl;
		instances++;
	cout << "GameComponent constructor called twice " << instances << endl;
}

GameComponent::~GameComponent(void) {

}

void GameComponent::Update(const tm* eventTime) {
	cout << "Object's id: " << this->id << " Time of invocation: " <<  asctime(eventTime) << endl;
}
