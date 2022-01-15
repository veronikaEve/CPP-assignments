#ifndef TASK1_DRAWABLEGAMECOMPONENT_H
#define TASK1_DRAWABLEGAMECOMPONENT_H

#include "GameComponent.h"

class DrawableGameComponent: public GameComponent {
private:
	void ChangeDirection();
	void Draw();
	int x;
	int y;

public:
	enum Direction {Left, Right, Up, Down};
	Direction direction;

	DrawableGameComponent(int x, int y);
	~DrawableGameComponent();

	void Update(const tm* eventTime);
	const int SCREEN_HEIGHT = 20;
	const int SCREEN_WIDTH = 80;
};


#endif //TASK1_DRAWABLEGAMECOMPONENT_H
