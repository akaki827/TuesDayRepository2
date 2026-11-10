#pragma once
#include<iostream>
#include"Enemy_Task1.h"
class Game
{
private:
	int select = 0;

	enum Enemy
	{
		Enemy1 = 1,
		Enemy2,
		Enemy3
	};

	std::unique_ptr<Enemy_Task1> enemy1 = std::make_unique<Enemy_Task1>();
	std::unique_ptr<Enemy_Task1> enemy2 = std::make_unique<Enemy_Task1>();
	std::unique_ptr<Enemy_Task1> enemy3 = std::make_unique<Enemy_Task1>();

	std::unique_ptr<Enemy_Task1> enemy;

public:
	void Select_Enemy();
	void GameRoop();
};

