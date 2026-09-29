#include "Game.h"
#include "CPU.h"
#include "Player.h"
#include "Judge.h"
void Game::GameRoop()
{
	player.InputPlayer(pplayernum);

	cpu.EnemyInput(penemynum);

	judge.Judgement(pplayernum, penemynum);
}