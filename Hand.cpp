#include "Hand.h"

Hand::Hand()
{
}

void Hand::AddCardToHand(Card playerCard)
{
	playerHand.push_back(playerCard);
}

int Hand::Total()
{
	int total = 0;
	bool hasAce = false;
	for (auto i = playerHand.begin(); i <= playerHand.end(); i++)
	{
		total += i->GetValue();
	}
	for (auto i = playerHand.begin(); i <= playerHand.end(); i++)
		if (i->GetValue() == Card::Ace)
		{
			hasAce = true;
		}
	if (hasAce && total <= 11)
	{
		total += 10;
	}
	return total;
}

bool Hand::Busted()
{
	return false;
}