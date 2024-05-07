#include "Coin.h"

Coin::Coin(){
	toss();
}

void Coin::toss(){
	if((rand() % 2)) sideUp = "heads";
	else sideUp = "tails";
}

string Coin::getSideUp() const{
	return sideUp;
}
