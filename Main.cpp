#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"
#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std;

void die() {
	cout << "why?\n";
	exit(1);
}

int main()
{
	//Fill Deck
	//Ask how many players in the game
	cout << "How many players are there?\n";
	int player_count;
	cin >> player_count;
	if (!cin) die();
	//Each player has hand
	vector<Player> players;
	for (int i = 0; i < player_count; ++i)
	{
		players.emplace_back(200, i + 1);	//Creates players, giving them $200 and a unique number
	}
	//	for(Player x : players) cerr << "Player " << x.GetID() << ": $" << x.GetWallet() << endl;
	Dealer dealer;
	//Start Game
	while (true)
	{
		//Start of a new round
		srand(time(0));
		Deck deck;
		deck.MakeDeck();
		deck.Shuffle();
		//Deal and bet phase
		for (Player& i : players)
		{
			cout << "Player " << i.GetID() << ": $" << i.GetWallet() << "\nPlace your bet.\n";
			while (true)
			{
				int temp = 0;
				cin >> temp;
				if (temp < 5)
				{
					cout << "The minimum is $5\n";
					continue;
				}
				if (temp > i.GetWallet()) {
					cout << "You don't have enough money\nEnter a smaller bet\n";
					continue;
				}
				i.RaiseBet(temp);
				break;
			}
			cout << "Player " << i.GetID() << " bets $" << i.GetBet() << endl;
			i.AddCardToHand(deck.Deal());	//Deals players two cards
			i.AddCardToHand(deck.Deal());
		}
		dealer.AddCardToHand(deck.Deal());	//Gives dealer 2 cards
		dealer.AddCardToHand(deck.Deal());
		//cerr << "made it to dealer\n";
		//TODO HAVE ONE OF THE DEALER'S CARDS FLIPPED
		for (Player i : players)
		{
			i.PrintInfo();
		}
	}
	//Play with money, player wins at $1000, bankrupts at 0
}