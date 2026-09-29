#include "CPU.h"
#include "Config.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void CPU::EnemyInput(int*enemy)
{
	*enemy = rand() % Config::ENEMY_MAXNUM;

	switch (*enemy)
	{
	case ROCK:
		cout << "相手の出した手はグーでした" << endl;
		break;
	case PAPER:
		cout << "相手の出した手はパーでした" << endl;
		break;
	case SCISSORS:
		cout << "相手の出した手はチョキでした" << endl;
		break;
	default:
		break;
	}
}