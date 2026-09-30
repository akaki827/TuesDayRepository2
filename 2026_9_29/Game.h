#pragma once
#include "Player.h"
#include "CPU.h"
#include "Judge.h"
class Game
{
private:
	Player player;
	CPU cpu;
	Judge judge;

	int playernum = 0;
	int enemy = 0;

	int*pplayernum = &playernum;
	int*penemynum = &enemy;
public:
	void GameRoop();
};