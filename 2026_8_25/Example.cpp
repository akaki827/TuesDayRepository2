#include "Example.h"
#include <iostream>
using namespace std;

void Example::Move()
{
	//メソッド
	playerX += 10;
}

void Example::Attack()
{
	cout << "攻撃力:" << attack << "攻撃しました。";
}

void Example::Damage(int damage)
{
	hp -= damage;

	if (hp < 0)hp = 0;
}
void Example::ShowState()
{
	cout << "HP" << hp << endl;
	cout << "PlayerX座標" << playerX << endl;
	cout << "PlayerY座標" << playerY << endl;
}