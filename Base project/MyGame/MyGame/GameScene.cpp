#include "GameScene.h"
#include "Spaceship.h"

GameScene::GameScene() 
{
	SpaceshipPtr spaceship = std::make_shared<Spaceship>();
	addGameObject(spaceship);
}
