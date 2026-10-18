#pragma once
#include"Config.h"
class Character
{
public:
	virtual void Input(int& input);
	bool GetCard(int& input, int card, int handscard[], int& chip);
};