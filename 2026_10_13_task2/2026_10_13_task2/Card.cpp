#include "Card.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Card::ShuffleCard(int&choicecard)
{
	for (int i = 0;i < Config::START_CARD;i++)
	{
		while (true)
		{
			choicecard = rand() % Config::TOATAL_CARD;

			if (deckcard[choicecard] == true);
			else
			{
				deckcard[choicecard] = true;
				//cout << "選ばれたカードは" << choicecard + Config::CARD_MINNUM << endl;
				break;
			}
		}
	}
}
void Card::GameCard(int&choicecard)
{
	while (true)
	{
		choicecard = rand() % Config::TOATAL_CARD;
		if (deckcard[choicecard] == true)
		{
			cout << "今回のカードは" << choicecard + Config::CARD_MINNUM << "です" << endl;
			deckcard[choicecard] = false;
			break;
		}
		else;
	}
}
