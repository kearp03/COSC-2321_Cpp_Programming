#include "Bank.h"

Bank::Bank(string bn, int t, string ba){
	setName(bn);
	setBType(t);
	setAddress(ba);
}

void Bank::setName(string bn){
	bName = bn;
}

string Bank::getName() const{
	return bName;
}

void Bank::setBType(int t){
	bType = static_cast<bankType>(t);
}

string Bank::getBType() const{
	switch(bType){
		case bankType::commercial: return "Commercial";
		case bankType::thrifts: return "Thrifts";
		case bankType::creditUnion: return "Credit Union";
		default: return "invalid";
	}
}

void Bank::setAddress(string ba){
	bAddress = ba;
}

string Bank::getAddress() const{
	return bAddress;
}
