/**
 * 2. Interest Earned
 * Assuming there are no deposits other than the original investment, the balance in a
 * savings account after one year may be calculated as
 * 		Amount = Principal * ( 1 + Rate/T )^T
 * Principal is the balance in the savings account, Rate is the interest rate,
 * and T is the number of times the interest is compounded during a year 
 * (T is 4 if the interest is compounded quarterly).
 * Write a program that asks for the principal, the interest rate, and the number
 * of times the interest is compounded. It should display a report similar to
 * Interest Rate: 			4.25%
 * Times Compounded:		  12
 * Principal:		   $ 1000.00
 * Interest:		   $   43.34
 * Amount in Savings:  $ 1043.34
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	double principal, rate, interest, amount;
	int compound;

	cout << setprecision(2) << fixed;

	cout << "Enter the principal amount: ";
	cin >> principal;

	cout << "Enter the interest rate as a decimal: ";
	cin >> rate;

	cout << "Enter the number of times the interest is compounded annually: ";
	cin >> compound;

	amount = principal * pow((1 + rate/compound), compound);
	interest = amount - principal;

	cout << "Interest Rate:\t\t" << setw(9) << right <<(rate*100) << "%" << endl;
	cout << "Times Compounded:\t" << setw(9) << right << compound << endl;
	cout << "Principal:\t\t$ " << setw(7) << principal << endl;
	cout << "Interest:\t\t$ " << setw(7) << interest << endl;
	cout << "Amount in Savings:\t$ " << setw(7) << amount << endl;

	return 0;
}
