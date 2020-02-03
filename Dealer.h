#pragma once
#include "Hand.h"
#include "Deck.h"
class Dealer : public Hand
{
public:
	void DealerTurn(Deck Deck)
	{
		for (auto i : playerHand)
		{
			if (!(i.GetCardState()))
				i.Flip();
			if (Total() < 17)
			{
				AddCardToHand(Deck.Deal());
			}
		}
	}
};
