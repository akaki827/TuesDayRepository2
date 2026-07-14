#pragma once
const bool usingcard = true;
const int CARDMAX = 10;
const int SELECTCARD = 3;
const int VICTORY = 3;

void Shuffle(int playercard[], int enemycard[]);
void InputCheak(int playerchoise[]);
void PlayerJudg(int playerchoise[], int enemycard[], int&playerhit);
void EnemyJudg(int enemychoise[], int playercard[], int&enemyhit);
void Enemy(int enemychoise[]);
void Game();