#include "Game.h"
#include<iostream>
#include"Enemy_Task1.h"

void Game::GameRoop()
{
	enemy1->ShowStatus();
	enemy2->ShowStatus();
	enemy3->ShowStatus();

	Select_Enemy();

	enemy->TakeDamage();

	enemy->ShowStatus();
}

void Game::Select_Enemy()
{

	while (true)
	{
		std::cout << "狙う敵を選んでください" << std::endl;
		std::cin >> select;

		if (select <= 0 || select >= 4)
		{
			std::cout << "入力された数字が違います" << std::endl;
		}
		else break;
	}
	switch (select)
	{
	case Game::Enemy1:
		enemy = std::move(enemy1);
		std::cout << "一体目にダメージ\n残り" << std::endl;
		break;
	case Game::Enemy2:
		enemy = std::move(enemy2);
		std::cout << "二体目にダメージ\n残り" << std::endl;
		break;
	case Game::Enemy3:
		enemy = std::move(enemy3);
		std::cout << "三体目にダメージ\n残り" << std::endl;
		break;
	default:
		break;
	}
}
