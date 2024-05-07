//Lab 2 Question 2 - Restaurant Bill
//Write a program that computes the tax and tip on a restaurant bill for a patron with
//a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
//be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
//amount, and total bill on the screen.

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double
		mealCost = 88.67,
		tax = 0.0675,
		tip = 0.2,
		total = 0.0;

	cout << setprecision(2) << fixed; //sets formating

	cout << "The meal cost is: $" << setw(8) << mealCost << endl;

	total = mealCost * tax;
	cout << "The tax amount of the meal is: $" << setw(8) << total << endl;

	total += mealCost;
	cout << "The total amount of the meal without tip is: $" << setw(8) << total << endl;

	tip *= total;
	cout << "The tip for the total bill is : $" << setw(8) << tip << endl;

	total += tip;
	cout << "The total bill is: $" << setw(8) << total << endl;

	return 0;
}
