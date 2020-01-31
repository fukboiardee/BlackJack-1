#pragma once

class Card
{
	enum  _cardFace { Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King }cFace;
	enum  _cardSuit { Spades, Clubs, Diamonds, Hearts }cSuit;

	bool _isFaceUp;
public:
	Card(_cardFace publicCardFace, _cardSuit publicCardSuit, bool isFaceUp)
	{
		cFace = publicCardFace;
		cSuit = publicCardSuit;
		_isFaceUp = isFaceUp;
	}

	int GetCardFace() { return cFace; }

	int GetCardSuit() { return cSuit; }

	int GetValue();

	bool GetCardState() { return _isFaceUp; }

	void Flip();

	//friend ostream& operator<<(ostream& os, Card const& card);
};
