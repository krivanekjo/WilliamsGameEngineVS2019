#include "GameScene.h"
#include "Spaceship.h"
#include "MeteorSpawner.h"

GameScene::GameScene() 
{
	SpaceshipPtr spaceship = std::make_shared<Spaceship>();
	addGameObject(spaceship);

	MeteorSpawnerPtr meteorSpawner = std::make_shared<MeteorSpawner>();
	addGameObject(meteorSpawner);
}
