#include<iostream>
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
#include"Wizard.h"
#include"BattleManager.h"

int main(void)
{
	//コンストラクタ
	Player player("ああああ");
	Enemy enemy("スライムキャンサー");
	Wizard wizard("キャスター");
	Boss boss("ゾーマ");
	BattleManager manager;

	manager.StartBattle(&player);
	manager.StartBattle(&enemy);
	manager.StartBattle(&wizard);
	manager.StartBattle(&boss);

	return 0;
}