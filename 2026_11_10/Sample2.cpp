#include<iostream>
#include<memory>
#include"Character.h"
int main(void)
{
	////
	//Player player;
	//Enemy enemy;
	//Character* target = &enemy;
	//target->TakeDamage(30);
	//enemy.ShowStatas();

	//
	//Enemy* enemy = new Enemy();

	//enemy->TakeDamage(30);
	//enemy->ShowStatas();

	//delete enemy;
	//enemy = nullptr;

	std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>();

	enemy->TakeDamage(60);

	std::cout << "“G‚ÌHPF\n";

	enemy->ShowStatas();

	return 0;

	return 0;
}