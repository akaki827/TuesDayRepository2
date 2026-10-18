#pragma once
#include "Config.h"
#include "Character.h"
class Card
{
private:
	int deckcard[Config::TOATAL_CARD];
public:
	void ShuffleCard(int&choicecard);
	void GameCard(int&choicecard);
};