#include "Character.h"
#include<iostream>
Character::Character() :hp(100){}

void Character::TakeDamage(int damage)
{
	hp -= damage;
	if (hp < 0)hp = 0;
}
void Character::ShowStatas() const
{
	std::cout << hp << std::endl;
}