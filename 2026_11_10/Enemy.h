#pragma once
class Enemy
{
private:
	int hp;
public:
	//コンストラクタ、デストラクタ
	Enemy();
	~Enemy();
	/// <summary>
	/// ダメージを与える
	/// </summary>
	/// <param name="damage">ダメージの量</param>
	void TakeDamage(int damage);

	/// <summary>
	/// ステータス表示
	/// </summary>
	void ShowStatus() const;
};