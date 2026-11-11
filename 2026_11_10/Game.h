#pragma once
#include<iostream>
#include<vector>
#include<memory>
#include"Enemy_Task1.h"
class Enemy_Task1;

class Game
{
private:
	int select = 0;


	std::vector<std::unique_ptr<Enemy_Task1>> enemies;

public:
	void CreateEnemies();
	void Select_Enemy();
	void GameRoop();
	bool AllEnemiesAlive() const;
};

