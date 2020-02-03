#pragma once
#include"Card.h"
#include <vector>
class Hand
{
protected:
	std::vector<Card> playerHand;
public:
	Hand();

	int Total();

	void AddCardToHand(Card playerCard);
};
