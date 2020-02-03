#include "Player.h"
#include "Deck.h"
#include "Hand.h"
#include <iostream>

void Player::RaiseBet(int raise)
{
	bet += raise;
	wallet -= raise;
}

void Player::DoubleDown()
{
	if (bet < wallet) Player::RaiseBet(bet);	//doubles player's bet
	else Player::RaiseBet(wallet);				//not enough money, so all in
}

void Player::Hit(Deck deck)
{
	AddCardToHand(deck.Deal());
}

bool Player::Busted()
{
	if (Total() > 21)
		return true;
	else return false;
}

void Player::PrintInfo()
{
	std::cout << "TESTPlayer " << GetID() << ": $" << GetWallet() << std::endl;
	for (Card c : playerHand) std::cout << "\t" << c.GetCardSuit() << " " << c.PrintCardFace() << std::endl;
	//	std::cerr << playerHand.size() << std::endl;
	//	std::cout << "\nTotal: " << Total() << std::endl;
}