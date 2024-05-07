#include <iostream>
#include <cstdlib>
#include "Coin.h"

using namespace std;

int main(){
	srand((unsigned)time(NULL));
	Coin quarter = Coin();
	int heads = 0, tails = 0;
	cout << "Initial side: " << quarter.getSideUp() << endl;

	for(int i = 0; i < 20; i++){
		quarter.toss();
		cout << "Side: " << quarter.getSideUp() << endl;
		if(quarter.getSideUp() == "heads") heads++;
		else tails++;
	}

	cout << "Number of heads: " << heads << endl;
	cout << "Number of tails: " << tails << endl;
}
