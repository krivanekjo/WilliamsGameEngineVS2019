#pragma once

#include "Engine/GameEngine.h"

class Spaceship : public GameObject
{
public:
	Spaceship();

	void draw();
	void update(sf::Time& elapsed);
private:
	sf::Sprite sprite_;
	int fireTimer_ = 0;
};
typedef std::shared_ptr<Spaceship> SpaceshipPtr;