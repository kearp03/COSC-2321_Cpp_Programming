/**
 * 3. Stock Commission
 * Kathryn bought N shares of stock at a price of $M per share.
 * She must pay her stockbroker a 2 percent commission for the transaction.
 * Write a program that calculates and displays the following:
 * The amount paid for the stock alone (without the commission)
 * The amount of the commission
 * The total amount paid (for the stock plus the commission)
 * The program will ask the user the values of N and M (remember to use lowercase variable names).
*/

#include <iostream>

using namespace std;

int main(){
	int n, m, commission, total;

	cout << "Enter the number of shares you bought: ";
	cin >> n;

	cout << "Enter how much the shares cost per share: $";
	cin >> m;

	total = n*m;
	cout << "Without the commission it cost: $" << total << endl;

	commission = total*0.02;
	cout << "The commission is: $" << commission << endl;

	total += commission;
	cout << "The total amount is: $" << total << endl;

	return 0;
}
