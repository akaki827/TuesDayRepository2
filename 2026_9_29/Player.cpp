#include "Player.h"
#include "Config.h"
#include <iostream>

using namespace std;

void Player::InputPlayer(int*playernum)
{
	while (true)
	{
		cout << "0.グー　1.パー　3.チョキ\nいずれかを入力してください\n";

		cin >> *playernum;

		if (*playernum > Config::PLAYER_MAXNUM && *playernum < Config::PLAYER_MINNUM)
		{
			cout << "入力された値が正しくない" << endl;
		}
		else break;
	}

	switch (*playernum)
	{
	case ROCK:
		cout << "プレイヤーの出した手はグーでした" << endl;
		break;
	case PAPER:
		cout << "プレイヤーの出した手はパーでした" << endl;
		break;
	case SCISSORS:
		cout << "プレイヤーの出した手はチョキでした" << endl;
		break;
	default:
		break;
	}
}