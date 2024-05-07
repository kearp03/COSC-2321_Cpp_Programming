#include "Account.h"

int Account::currentAccountID = 1000;

Account::Account(string n, int t, double b){
	accountID = currentAccountID;
	currentAccountID += 123;
	setName(n);
	setAType(t);
	setBalance(b);
}

void Account::setName(string n){
	holderName = n;
}

string Account::getName() const{
	return holderName;
}

void Account::setAType(int t){
	aType = static_cast<accountType>(t);
}

string Account::getAType() const{
	switch(aType){
		case accountType::checking: return "Checking";
		case accountType::saving: return "Saving";
		default: return "invalid";
	}
}

void Account::setBalance(double b){
	balance = b;
}

double Account::getBalance() const{
	return balance;
}
