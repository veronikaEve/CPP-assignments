#ifndef TASK1_GAMECOMPONENT_H
#define TASK1_GAMECOMPONENT_H

#include <ctime>
#include "iostream"
using namespace std;

class GameComponent {
protected:
	int id;
	static int instances;

public:
	GameComponent();
	~GameComponent();

	virtual void Update(const tm*);

};


#endif //TASK1_GAMECOMPONENT_H
