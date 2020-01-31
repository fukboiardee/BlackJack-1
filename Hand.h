#pragma once
#include"Card.h"
#include <vector>
class Hand
{
protected:
	std::vector<Card> Cards;
public:
	Hand();

	int Total();

	bool Busted();

	void AddCard(Card playerCard);
};
