#include "Enemy.h"
#include<iostream>

//コンストラクタ
Enemy::Enemy() :hp(100) {}

//デストラクタ
Enemy::~Enemy()
{
	std::cout << "エネミーの破棄" << std::endl;
}
void Enemy::TakeDamage(int damage)
{
	//ダメージを与える
	hp -= damage;

	//HPは0より下にはならない
	if (hp < 0)hp = 0;
}
void Enemy::ShowStatus() const
{
	//HPの表示
	std::cout << "Enemy HP" << hp << std::endl;
}