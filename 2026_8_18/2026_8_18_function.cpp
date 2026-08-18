#include<iostream>
#include"2026_8_18.h"
void Game()
{
	int hp = HP_MAX;
	std:: cout << hp << " ";
	Damage(&hp);
	std::cout << hp << " ";
	Heal(&hp);
	std::cout << hp << std::endl;
}
void Damage(int* hp) { *hp -= DAMAGE; }
void Heal(int* hp) { *hp += HEAL; }