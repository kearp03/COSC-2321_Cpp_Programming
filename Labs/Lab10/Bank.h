#include <string>
#ifndef BANK_H_
#define BANK_H_

using namespace std;

class Account;

class Bank{
	private:
		string bName;
		enum bankType{commercial, thrifts, creditUnion} bType;
		string bAddress;

	public:
		Bank(string, int, string);
		void setName(string);
		string getName() const;
		void setBType(int);
		string getBType() const;
		void setAddress(string);
		string getAddress() const;

		friend void print(Bank, Account[], int);
};

#endif /* BANK_H_ */
