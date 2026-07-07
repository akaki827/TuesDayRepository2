#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260707_Header2_nakayama.h"

using namespace std;

/// <summary>
/// 入力チェック
/// </summary>
/// <param name="playerchoise">プレイヤーの選んだカード</param>
/// <returns></returns>
void InputCheak(int playerchoise[])
{
	for (int i = 0; i < 3; i++)
	{
		while (true)
		{
			cout << "数字を入力してください" << endl;

			cin >> playerchoise[i];

			if (playerchoise[i] < 0 or playerchoise[i] >= 9)
			{
				cout << "数値が違います" << endl;
			}
			else break;
		}
	}
}
/// <summary>
/// 当たっているかの判定
/// </summary>
/// <param name="playercard"></param>
/// <returns></returns>
void PlayerJudg(int playerchoise[], int enemycard[],int playerhit)
{
	cout << "プレイヤーのチェックは\n";
	for (int i = 0; i < 3; i++)
	{
		if (playerchoise[i] == enemycard[i])
		{
			cout << "Hit" << endl;
			playerhit++;
		}
		else cout << "Miss" << endl;
	}
}
void EnemyJudg(int enemychoise[], int playercard[], int enemyhit)
{
	cout << "エネミーのチェックは\n";
	for (int i = 0; i < 3; i++)
	{
		if (enemychoise[i] == playercard[i])
		{
			cout << "Hit" << endl;
			enemyhit++;
		}
		else cout << "Miss" << endl;
	}
}

void Shuffle(int playercard[],int enemycard[])
{
	int playerselect,enemyselect;
	for (int i = 0; i < SELECTCARD; i++)
	{
		while (true)
		{
			playerselect = rand() % CARDMAX;
			if (playercard[playerselect] == usingcard)
			{
				cout << playercard << endl;
				playercard[playerselect] == usingcard;
			}
			else break;
		}
		while (true)
		{
			enemyselect = rand() % CARDMAX;
			if (enemycard[enemyselect] == usingcard)
			{
				enemycard[enemyselect] == usingcard;
			}
		}
	}
}

void Enemy(int enemychoise[])
{
	for (int i = 0; i > SELECTCARD; i++)
	{
		enemychoise[i] = rand() % CARDMAX;
	}
}

void Game()
{
	int playerhit = 0, enemyhit = 0;
	int playercard[SELECTCARD], enemycard[SELECTCARD];
	int playerchoise[CARDMAX], enemychoise[CARDMAX];

	srand((unsigned)time(NULL));

	while(true)
	{
		Shuffle(playercard, enemycard);

		InputCheak(playerchoise);

		Enemy(enemychoise);

		PlayerJudg(playerchoise, enemycard, playerhit);

		EnemyJudg(enemychoise, playercard, enemyhit);

		if (playerhit > 3)
		{
			cout << "プレイヤーWIN！！" << endl;
			break;
		}
		else if (enemyhit > 3)
		{
			cout << "エネミーWIN！！" << endl;
			break;
		}
		else playerhit = 0, enemyhit = 0;
	}
}