#include "Game.h"
#include<iostream>

using namespace std;

void Game::GameRoop()
{
	//カードの初期化
	card.ShuffleCard(choicecard);

	//最初の公開カード
	card.GameCard(choicecard);

	for (int i = 0;i < Config::START_CARD - 1;)
	{
		GameDraw();

		//プレイヤーのターン
		turn.TurnManager(&player, input);

		//スキップされなければ次の公開カード
		if (character.GetCard(input, choicecard, playercard, playerchip) == false)chip++;
		else
		{
			card.GameCard(choicecard);
			playerchip += chip, chip = 0;
			i++;
		}
		//エネミー１のターン
		turn.TurnManager(&enemy, input);

		//スキップされなければ次の公開カード
		if (character.GetCard(input, choicecard, enemycard, enemychip) == false)chip++;
		else
		{
			card.GameCard(choicecard);
			enemychip += chip, chip = 0;
			i++;
		}


		//エネミー２のターン
		turn.TurnManager(&enemy, input);

		//スキップされなければ次の公開カード
		if (character.GetCard(input, choicecard, enemy2card, enemy2chip) == false)chip++;
		else
		{
			card.GameCard(choicecard);
			enemy2chip += chip, chip = 0;
			i++;
		}
	}
	for (int j = 0;j < Config::TOATAL_CARD;j++)
	{
		if (playercard[j] == true)
		{
			consecutive = j;
			while (true)
			{
				if (playercard[consecutive] == true)
				{
					playercard[consecutive] = false;
					consecutive++;
				}
				else break;
			}
			playerpoint += j + Config::CARD_MINNUM;
			cout << "プレイヤーに" << j + Config::CARD_MINNUM << "ポイント\n";
		}
		else;
		if (enemycard[j] == true)
		{
			consecutive = j;
			while (true)
			{
				if (enemycard[consecutive] == true)
				{
					enemycard[consecutive] = false;
					consecutive++;
				}
				else break;
			}
			enemypoint += j + Config::CARD_MINNUM;
			cout << "エネミー１に" << j + Config::CARD_MINNUM << "ポイント\n";
		}
		else;
		if (enemy2card[j] == true)
		{
			consecutive = j;
			while (true)
			{
				if (enemy2card[consecutive] == true)
				{
					enemy2card[consecutive] = false;
					consecutive++;
				}
				else break;
			}
			enemy2point += j + Config::CARD_MINNUM;
			cout << "エネミー２に" << j + Config::CARD_MINNUM << "ポイント\n";
		}
		else;
	}
	playerpoint -= playerchip, enemypoint -= enemychip, enemy2point -= enemy2chip;
	cout << "チップを差し引いた結果合計は\n" << "プレイヤー　" << playerpoint << "　エネミー１　" << enemypoint << "　エネミー２　" << enemy2point << "よって...\n";
	if (playerpoint == enemypoint == enemy2point)cout << "引き分け";
	else if (playerpoint > enemypoint && playerpoint > enemy2point)cout << "プレイヤーの勝利";
	else if (enemypoint > playerpoint && enemypoint > enemy2point)cout << "エネミー１の勝利";
	else cout << "エネミー２の勝利";
}

//描画
void Game::GameDraw()
{
	cout << "=====================================================================" << endl;
	//プレイヤー
	cout << "現在所持中のプレイヤーのカード\n";
	for (int j = 0;j < Config::TOATAL_CARD;j++)
	{
		if (playercard[j] == true)
		{
			cout << j + Config::CARD_MINNUM << endl;
		}
		else;
	}
	cout << "\n現在のプレイヤーのチップ　" << playerchip << endl;

	//エネミー
	cout << "\n---------------------------------------------------------------------\n\n現在所持中のエネミー１のカード\n";
	for (int j = 0;j < Config::TOATAL_CARD;j++)
	{
		if (enemycard[j] == true)
		{
			cout << j + Config::CARD_MINNUM << endl;
		}
		else;
	}
	cout << "\n現在のエネミー１のチップ　" << enemychip << endl;

	//エネミー２
	cout << "\n---------------------------------------------------------------------\n\n現在所持中のエネミー２のカード\n";
	for (int j = 0;j < Config::TOATAL_CARD;j++)
	{
		if (enemy2card[j] == true)
		{
			cout << j + Config::CARD_MINNUM << endl;
		}
		else;
	}
	cout << "\n現在のエネミー２のチップ　" << enemy2chip << endl;
	cout << "=====================================================================" << endl;

}