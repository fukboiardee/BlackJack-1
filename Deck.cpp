#include "Deck.h"
#include "Hand.h"
#include <algorithm>

Deck::Deck()
{
	Cards.reserve(52);
}

void Deck::MakeDeck()
{
}

void Deck::Shuffle()
{
	std::random_shuffle(Cards.begin(), Cards.end());
}