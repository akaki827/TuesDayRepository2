#include<iostream>
#include"Enemy.h"

int main(void)
{
	////エネミーの宣言
	//Enemy enemy1,enemy2,enemy3;

	////エネミーのアドレスを取得
	//Enemy* target = &enemy1;

	////エネミークラスのアドレスのオブジェクトにダメージ
	//target->TakeDamage(30);

	////アドレスの変更
	//target = &enemy2;
	//target->TakeDamage(50);

	////全体のステータスを表示
	//enemy1.ShowStatus();
	//enemy2.ShowStatus();
	//enemy3.ShowStatus();

	std::unique_ptr<Enemy> enemy1 = std::make_unique<Enemy>();

	enemy1->ShowStatus();
	std::unique_ptr<Enemy> enemy2;
	enemy2 = std::move(enemy1);

	enemy2->TakeDamage(20);
	enemy2->ShowStatus();

	return 0;
}