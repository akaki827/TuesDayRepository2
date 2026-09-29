#include "Judge.h"
#include "Config.h"
#include "CPU.h"
#include "Player.h"
#include <iostream>

using namespace std;

void Judgement(int*enemy,int*player)
{
	if (*player - *enemy == -1 || *player - *enemy == 0)
	{
		cout << "プレイヤーの敗北者" << endl;
	}
	else
	{
		cout << "プレイヤーの勝者" << endl;
	}
}