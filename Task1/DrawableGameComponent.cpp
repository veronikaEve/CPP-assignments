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
	cout << "Direction: " << EnumToString(direction) << " x: " << x << " y: " << y << endl;
}

void DrawableGameComponent::Update(const tm *eventTime) {
	cout << "ID: " << this->id << " Time: " << asctime(eventTime);

	switch (direction) {
		case Right:
			x < SCREEN_WIDTH ? x++ : x=SCREEN_WIDTH;
			break;
		case Left:
			x > 0 ? x-- : x=0;
			break;
		case Up:
			y < SCREEN_HEIGHT ? y++ : y=SCREEN_HEIGHT;
			break;
		case Down:
			y > 0 ? y-- : y=0;
			break;
	}

	Draw();
	ChangeDirection();
}