#pragma once
#include<string>
class Card
{
	enum cardFace { Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King };
	enum cardSuit { Spades, Clubs, Diamonds, Hearts };

	bool isFaceUp;
public:
	Card(cardFace, cardSuit)
	{
		cardFace publicCardFace = Ace;
		cardSuit publicCardSuit = Spades;
	}
			
	int GetCardValue();

	std::string GetCardFace();

	std::string GetCardSuit();

	void Flip();

	//friend ostream& operator << (ostream& os, const Card& card);
};
