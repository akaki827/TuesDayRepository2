#include "Player.h"
#include "Config.h"
#include <iostream>

using namespace std;

void Player::InputPlayer(int*playernum)
{
	if (*playernum <= Config::PLAYER_MAXNUM && *playernum >= Config::PLAYER_MINNUM)
	{
		cin >> *playernum;
	}
	switch (*playernum)
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