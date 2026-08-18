#pragma once
//定数
const int HP_MAX = 100;
const int DAMAGE = 20;
const int HEAL = 30;
//関数

/// <summary>
/// ゲーム関数
/// </summary>
void Game();
/// <summary>
/// ダメージ
/// </summary>
/// <param name="hp">HP</param>
void Damage(int*hp);
/// <summary>
/// 回復 
/// </summary>
/// <param name="hp">HP</param>
void Heal(int*hp);