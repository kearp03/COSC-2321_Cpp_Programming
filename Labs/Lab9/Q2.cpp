#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Coin.h"

using namespace std;

int main(){
	cout << setprecision(2) << fixed;
	srand((unsigned) time(NULL));
	Coin quarter = Coin();
	Coin dime = Coin();
	Coin nickel = Coin();
	double total = 0.0;

	while(total < 1){
		if(quarter.getSideUp() == "heads") total += 0.25;
		if(dime.getSideUp() == "heads") total += 0.10;
		if(nickel.getSideUp() == "heads") total += 0.05;
		quarter.toss();
		dime.toss();
		nickel.toss();
	}

	cout << "Total: $" << total << endl;
	cout << (total == 1 ? "You win! :)" : "You lose :(");
}
