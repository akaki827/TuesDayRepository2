class Character
{
public:
	Character();
	void TakeDamage(int damage);
	void ShowStatas() const;
private:
	int hp;
};

class Player :public Character{};

class Enemy :public Character{};