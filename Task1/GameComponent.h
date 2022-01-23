#ifndef TASK1_GAMECOMPONENT_H
#define TASK1_GAMECOMPONENT_H

#include <ctime>
#include "iostream"
using namespace std;

class GameComponent {
private: // The class diagram said 'private' but i dont see how that would work since the child wouldn't have an id
	int instances;
	int id;

public:
	GameComponent();
	~GameComponent();

	virtual void Update(const tm*);

};


#endif //TASK1_GAMECOMPONENT_H
