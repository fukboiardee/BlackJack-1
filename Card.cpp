#include "Card.h"
#include <string>

Card();

int Card::GetCardValue()
{
	int value = 0;
	if (isFaceUp)
	{
		value = cardFace;
	}
	if (value > 10)
	{
		value = 10;
	}
	return value;
}

std::string Card::GetCardFace()
{
	return std::string();
}

std::string Card::GetCardSuit()
{
	return std::string();
}

void Card::Flip()
{
}