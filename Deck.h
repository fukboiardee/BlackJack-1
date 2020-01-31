#pragma once
#include "Hand.h"
class Deck : public Hand
{
public:
	Deck();

	void MakeDeck();

	void Shuffle();

	void Deal();
};
