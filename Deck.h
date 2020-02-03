#pragma once
#include "Hand.h"
class Deck : public Hand
{
public:
	std::vector<Card> DeckCards;
	Deck();
	void MakeDeck();

	void AddCardToDeck(Card currentCard);

	void Shuffle();

	Card Deal();
};
