#include "Game.h"
#include"Enemy_Task1.h"
#include<iostream>

void Game::CreateEnemies()
{
	for (int i = 0; i < 3; ++i)
	{
		enemies.push_back(std::make_unique<Enemy_Task1>(100));
	}
}
void Game::GameRoop()
{
	while (true)
	{
		if (AllEnemiesAlive())
		{
			std::cout << "‚·‚×‚Ä‚Ì“G‚ðŒ‚”j‚µ‚Ü‚µ‚½I\n";
			break;
		}

		Select_Enemy();
	}
}
void Game::Select_Enemy()
{
	while (true)
	{
		std::cout << "‘_‚¤“G‚ð‘I‚ñ‚Å‚­‚¾‚³‚¢" << std::endl;
		std::cin >> select;

		if (select <= 0 || select > static_cast<int>(enemies.size()))
		{
			std::cout << "“ü—Í‚³‚ê‚½”Žš‚ªˆá‚¢‚Ü‚·" << std::endl;
		}
		else if (!enemies[select]->EnemyAlive())
		{
			std::cout << select << "‘Ì–Ú‚ÌƒGƒlƒ~[‚ÍŠù‚ÉŒ‚”j‚µ‚Ä‚¢‚Ü‚·" << std::endl;
		}
		else
		{
			enemies[select - 1]->TakeDamage();
			std::cout << select << "‘Ì–Ú‚Éƒ_ƒ[ƒW\nŽc‚è";

			break;
		}
	}
}
bool Game::AllEnemiesAlive() const
{
	for (const auto& enemy : enemies)
	{
		if (enemy->EnemyAlive())
		{
			return false;
		}
	}
	return true;
}
