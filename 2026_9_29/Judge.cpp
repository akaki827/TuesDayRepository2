#include "Judge.h"
#include "Config.h"
#include "CPU.h"
#include "Player.h"
#include <iostream>

using namespace std;

void Judge::Judgement(int*enemy,int*player)
{
	if (*player == *enemy)
	{
		cout << "引き分け" << endl;
	}
	else if (*player - *enemy == -1 || *player - *enemy == 2)
	{
		cout << "プレイヤーの勝者" << endl;
	}
	else
	{
		cout << "プレイヤーの敗北者" << endl;
	}
}