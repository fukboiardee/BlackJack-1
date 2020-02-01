#include "Deck.h"
#include "Hand.h"
#include "Card.h"
#include <ctime>
#include <algorithm>

Deck::Deck()
{
}

void Deck::AddCardToDeck(Card currentCard)
{
	DeckCards.push_back(currentCard);
}

void Deck::MakeDeck()
{
	for (int x = Card::Spades; x <= Card::Hearts; x++)
	{
		for (int y = Card::Ace; y <= Card::King; y++)
		{
			AddCardToDeck(Card(static_cast<Card::cardFace>(x), static_cast<Card::cardSuit>(y), false));
		}
	}
}

void Deck::Shuffle()
{
	std::srand(unsigned(std::time(0)));
	std::random_shuffle(playerHand.begin(), playerHand.end());
}