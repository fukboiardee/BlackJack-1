#include "Card.h"
#include <iostream>
#include <string>

void Card::Flip()
{
	if (!_isFaceUp)
	{
		_isFaceUp = true;
	}
}

int Card::GetValue()
{
	int value = 0;
	if (_isFaceUp)
	{
		value = GetCardFace();
		if (value > 10) value = 10;
	}
	return value;
}

std::string Card::PrintCardFace()
{
	switch (cFace)
	{
	case Card::Ace: return "Ace";
		break;
	case Card::Two: return "Two";
		break;
	case Card::Three: return "Three";
		break;
	case Card::Four: return "Four";
		break;
	case Card::Five: return "Five";
		break;
	case Card::Six: return "Six";
		break;
	case Card::Seven: return "Seven";
		break;
	case Card::Eight: return "Eight";
		break;
	case Card::Nine: return "Nine";
		break;
	case Card::Ten: return "Ten";
		break;
	case Card::Jack: return "Jack";
		break;
	case Card::Queen: return "Queen";
		break;
	case Card::King: return "King";
		break;
	}
}