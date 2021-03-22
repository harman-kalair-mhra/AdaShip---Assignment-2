#pragma once
#include "Player.h"
class Computer : public Player{
public:
	Computer();
	Board* fire(Board&);
};