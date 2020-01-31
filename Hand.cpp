#include "Hand.h"

Hand::Hand()
{
	Cards.reserve(14);
}

void Hand::AddCard(Card playerCard)
{
	Cards.push_back(playerCard);
}

int Hand::Total()
{
	if (Cards.empty())
	{
		return 0;
	}
	int total = 0;
}

bool Hand::Busted()
{
	return false;
}