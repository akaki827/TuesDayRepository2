#include "Character.h"
#include <iostream>

using namespace std;

void Character::Input(int& input) {};
bool Character::GetCard(int& input, int card, int handscard[], int& chip)
{
	if (chip < 0)
	{
		input = 0;
		cout << "チップ不足により強制的にカードを入手しました。" << endl;
	}
	if (input == 0)
	{
		handscard[card] = true;

		cout << card + Config::CARD_MINNUM << "を獲得しました。" << endl;

		return true;
	}
	else if (input == 1)
	{
		chip--;

		cout << "チップを１支払いスキップしました。" << endl;

		return false;
	}
}