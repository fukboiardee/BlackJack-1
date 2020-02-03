#pragma once
#include <string>

class Card
{
protected:
	bool _isFaceUp;
public:
	enum cardFace { Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King }cFace;
	enum cardSuit { Spades = 1, Clubs, Diamonds, Hearts }cSuit;

	Card(cardFace publicCardFace, cardSuit publicCardSuit, bool isFaceUp)
	{
		cFace = publicCardFace;
		cSuit = publicCardSuit;
		_isFaceUp = isFaceUp;
	}

	int GetCardFace() { return cFace; }

	int	GetCardSuit() { return cSuit; }

	int GetValue();

	std::string PrintCardFace();

	//std::string PrintCardSuit();

	bool GetCardState() { return _isFaceUp; }

	void Flip();

	//friend ostream& operator<<(ostream& os, const Card& card);
};
