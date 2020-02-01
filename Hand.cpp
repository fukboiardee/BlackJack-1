#include "Hand.h"

Hand::Hand()
{
}

void Hand::AddCard(Card playerCard)
{
	Cards.push_back(playerCard);
}

int Hand::Total()
{
	int total = 0;
	for (auto i = Cards.begin(); i <= Cards.end(); i++)
	{
		total += i->GetValue();
	}
	bool hasAce = false;
	for (auto i = Cards.begin(); i <= Cards.end(); i++)
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