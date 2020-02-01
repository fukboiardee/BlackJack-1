#include "Deck.h"
#include "Hand.h"
#include <ctime>
#include <algorithm>

Deck::Deck()
{
}

void Deck::MakeDeck()
{
	for (int x = Card::Spades; x <= Card::Hearts; x++)
	{
		for (int y = Card::Ace; y <= Card::King; y++)
		{
		}
	}
}

void Deck::Shuffle()
{
	std::srand(unsigned(std::time(0)));
	std::random_shuffle(Cards.begin(), Cards.end());
}