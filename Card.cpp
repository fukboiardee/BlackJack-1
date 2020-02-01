#include "Card.h"

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

/*std::ostream& operator<<(ostream& os, const Card& card)
{
	os << card.publicCardFace <<
}
*/