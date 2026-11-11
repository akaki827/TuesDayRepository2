#pragma once
class Enemy_Task1
{
private:
	int hp;
	const int DAMAGE = 30;
public:
	Enemy_Task1(int hp);

	void TakeDamage();
	void ShowStatus() const;
	int EnemyAlive();
};

