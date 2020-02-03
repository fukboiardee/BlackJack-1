#pragma once
#include "Hand.h"
#include "Deck.h"
//#include <vector>
class Player : public Hand
{
private:
	int wallet;
	int ID;
	int bet;
public:
	Player(int mones, int iD) {
		wallet = mones;
		ID = iD;
		bet = 0;
	}
	int GetWallet() { return wallet; }
	int GetID() { return ID; }
	int GetBet() { return bet; }
	void RaiseBet(int raise);
	void ZeroBet() { bet = 0; }
	void DoubleDown();
	void Hit(Deck deck);
	void PrintInfo();
	bool Busted();

	//	void stand();
};
