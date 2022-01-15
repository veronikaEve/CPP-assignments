#ifndef TASK1_GAMECOMPONENT_H
#define TASK1_GAMECOMPONENT_H

#include <ctime>
#include "iostream"
using namespace std;

class GameComponent {
private:
	int id;
	int instances;

public:
	GameComponent();
	~GameComponent();

	void Update(tm*);

};


#endif //TASK1_GAMECOMPONENT_H
