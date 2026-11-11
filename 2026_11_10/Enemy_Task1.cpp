#include "Enemy_Task1.h"
#include<iostream>

Enemy_Task1::Enemy_Task1(int hp) : hp(hp) {}

void Enemy_Task1::TakeDamage()
{
	hp -= DAMAGE;
	if (hp < 0)hp = 0;
}

void Enemy_Task1::ShowStatus() const {std::cout << "HP:" << hp << std::endl;}

int Enemy_Task1::EnemyAlive()
{
	if (hp == 0){return false;}
	else return true
		;
}