//Lab 2 Question 1 - Sales Prediction:
//The East Coast sales division of a company generates 58 percent of total sales. Based
//on that percentage, write a program that will predict how much the East Coast division
//will generate if the company has $8.6 million in sales this year.

#include <iostream>
using namespace std;

int main(){
	double percentOfTotalSales = 0.58, sales = 8600000, prediction = 0.0;

	prediction = percentOfTotalSales * sales;

	cout << "The prediction for the East Coast sales division this year is: $" << prediction << endl;

	return 0;
}
