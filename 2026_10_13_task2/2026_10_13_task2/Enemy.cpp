#include "Enemy.h"
#include <cstdlib>
#include <ctime>

void Enemy::Input(int& enemyinput)
{
	enemyinput = rand() % Config::ENEMY_SELECT;
}
