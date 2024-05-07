#include <string>
#include "Bank.h"
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account{
	private:
		int accountID;
		string holderName;
		enum accountType{checking, saving} aType;
		double balance;
		static int currentAccountID;

	public:
		Account(string, int, double);
		void setName(string);
		string getName() const;
		void setAType(int);
		string getAType() const;
		void setBalance(double);
		double getBalance() const;

		friend void print(Bank, Account[], int);
};

#endif /* ACCOUNT_H_ */
