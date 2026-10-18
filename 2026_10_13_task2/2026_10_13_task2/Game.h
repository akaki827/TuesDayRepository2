#pragma once
#include"Character.h"
#include"Enemy.h"
#include"Player.h"
#include"Card.h"
#include"Turn.h"
class Game
{
private:
	int input = 0;
	int turncount;
	int choicecard = 0;
	int chip = 0;
	int consecutive;
	int deakcardcount = Config::START_CARD;

	int playercard[Config::CARD_MAXNUM];
	int playerchip = Config::START_CHIP;
	int playerpoint = 0;

	int enemycard[Config::CARD_MAXNUM];
	int enemychip = Config::START_CHIP;
	int enemypoint = 0;

	int enemy2card[Config::CARD_MAXNUM];
	int enemy2chip = Config::START_CHIP;
	int enemy2point = 0;

	Character character;
	Enemy enemy;
	Player player;
	Card card;
	Turn turn;

public:
	void GameInit();
	void GameRoop();
	void GameDraw();
};

