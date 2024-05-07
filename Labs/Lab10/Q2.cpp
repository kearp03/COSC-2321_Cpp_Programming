#include <iostream>
#include <iomanip>
#include "Bank.h"
#include "Account.h"

using namespace std;

void print(Bank bank, Account accounts[], int n){
	cout << "Bank:" << endl;
	cout << "Name: " << bank.bName << endl;
	cout << "Type: " << bank.getBType() << endl;
	cout << "Address: " << bank.bAddress << endl;

	cout << endl << "Account Holders:" << endl;

	for(int i = 0; i < n; i++){
		cout << "Holder Name: " << accounts[i].holderName << endl;
		cout << "Account ID: " << accounts[i].accountID << endl;
		cout << "Account type: " << accounts[i].getAType() << endl;
		cout << "Balance: $" << accounts[i].balance << endl;
		cout << endl;
	}
}

int main(){
	cout << setprecision(2) << fixed;
	Bank firstCreditUnion("First Credit Union", 2 ,"123 W Main Street");
	Account customers[] = {	Account("Jim Bob", 0, 1230.43),
							Account("Susan Smith", 1, 3213.43),
							Account("John Doe", 1, 2321.43),
							Account("Jane Doe", 0, 3210.32),
							Account("Billy Bob", 1, 2310.32)	};

	print(firstCreditUnion, customers, sizeof(customers)/sizeof(customers[0]));
}
