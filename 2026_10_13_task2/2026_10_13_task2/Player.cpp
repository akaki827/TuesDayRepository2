#include "Player.h"
#include<iostream>

using namespace std;

void Player::Input(int& playerinput)
{
	while (true)
	{
		cout << "数字を入力してください\n０　カードを取る　:　１　カードを取らない" << endl;

		cin >> playerinput;

		if (playerinput == 0 or playerinput == 1)break;
		else cout << "数値が違います" << endl;
	}
}
//bool Player::GetCard(int input, int card)
//{
//	if (playerchip < 0)
//	{
//		input = 0;
//		cout << "チップ不足により強制的にカードを入手しました。" << endl;
//	}
//	if (input == 0)
//	{
//		playercard[card] = true;
//
//		cout << card + Config::CARD_MINNUM << "を獲得しました。" << endl;
//
//		return true;
//	}
//	else if (input == 1)
//	{
//		playerchip--;
//
//		cout << "チップを１支払いスキップしました。" << endl;
//
//		return false;
//	}
//}