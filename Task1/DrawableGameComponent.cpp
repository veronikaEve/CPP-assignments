#include "DrawableGameComponent.h"

string EnumToString (DrawableGameComponent::Direction direction) {
	switch (direction) {
		case DrawableGameComponent::Right:
			return "Right";
		case DrawableGameComponent::Left:
			return "Left";
		case DrawableGameComponent::Up:
			return "Up";
		case DrawableGameComponent::Down:
			return "Down";
	}
}

DrawableGameComponent::DrawableGameComponent(int x, int y): x(x), y(y), GameComponent() {
	direction = Direction::Right;
}

DrawableGameComponent::~DrawableGameComponent() {

}

void DrawableGameComponent::ChangeDirection() {
	Direction oldDirection = direction;
	while (direction == oldDirection ) {
		srand(time(0));
		direction = Direction(rand() % 4);
	}
}

void DrawableGameComponent::Draw() {
	cout << "Current direction: " << EnumToString(direction) << " x: " << x << " y: " << y << endl;
}

void DrawableGameComponent::Update(const tm *eventTime) {
	cout << "Object's id: " << this->id << " Time of invocation: " << asctime(eventTime) << endl;

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