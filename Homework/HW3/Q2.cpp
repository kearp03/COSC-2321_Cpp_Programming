/**
 * 2. Pennies for Pay
 * Write a program that calculates how much a person would earn over a
 * period of time if his or her salary is one penny the first day and
 * two pennies the second day, and continues to double each day.
 * The program should ask the user for the number of days.
 * Display a table showing how much the salary was for each day, and
 * then show the total pay at the end of the period. The output should
 * be displayed in a dollar amount, not the number of pennies.
 * Input Validation: Do not accept a number less than 1 for the
 * number of days worked.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int days = 1, pennies = 1;
	double total = 0;

	cout << "Enter the number of days: ";
	cin >> days;
	while(days < 1){
		cout << "Invalid, enter the number of days: ";
		cin >> days;
	}

	cout << setprecision(2) << fixed;
	for(int i = 1; i <= days; i++, pennies *= 2){
		double dayWage = (double)(pennies / 100.0);
		cout << "Day " << i << ":\t Salary: $" << dayWage << endl;
		total += dayWage;
	}

	cout << endl << "Total salary: $" << total << endl;

	return 0;
}
