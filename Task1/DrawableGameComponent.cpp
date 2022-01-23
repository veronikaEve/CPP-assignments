#include "DrawableGameComponent.h"

DrawableGameComponent::DrawableGameComponent(int x, int y): x(x), y(y), GameComponent() {
	direction = Direction::Right;
}

DrawableGameComponent::~DrawableGameComponent() {

}

void DrawableGameComponent::ChangeDirection() {
//	direction = Direction.randpm
}

void DrawableGameComponent::Draw() {
	cout << "Current direction: " << direction << " |x: " << x << " |y: " << y << endl;
}

void DrawableGameComponent::Update(const tm *eventTime) {
	cout << "Object's id: " << "" << "Time of invocation: " << eventTime << endl;

	switch (direction) {
		case Right:
			x++;
			break;
		case Left:
			x--;
			break;
		case Up:
			y++;
			break;
		case Down:
			y--;
			break;
	}

	Draw();
	ChangeDirection();
}
