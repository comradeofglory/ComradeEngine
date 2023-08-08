#pragma once
#include "SFML/Graphics.hpp"
#include "CharacterMaster.h"
#include "TileMap.h"
#include "PhysicsEngine.h"

class Level
{
	TileMap tileMap;
	CharacterMaster characterMaster;
	PhysicsEngine Engine;
};

