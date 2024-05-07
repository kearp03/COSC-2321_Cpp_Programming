/**
 * 2. Paint Job Estimator
 * A painting company has determined that for every 110 square feet of
 * wall space, one gallon of paint and eight hours of labor will be
 * required. The company charges $25.00 per hour for labor. Write a
 * modular program that allows the user to enter the number of rooms
 * that are to be painted and the price of the paint per gallon. It
 * should also ask for the square feet of wall space in each room.
 * It should then display the following data:
 * 		• The number of gallons of paint required 
 * 		• The hours of labor required
 * 		• The cost of the paint
 * 		• The labor charges
 * 		• The total cost of the paint job
 * This program should be modular, so use functions for input,
 * for calculations and for displaying the results.
 * Input validation: Do not accept a value less than 1 for the number
 * of rooms. Do not accept a value less than $10.00 for the price of
 * paint. Do not accept a negative value for square footage of wall space.
*/

#include <iostream>
#include <iomanip>

using namespace std;

void input(double&, double, string, bool);
void input(int&, int, string, bool);
double calcGallons(double);
double calcHours(double);
double calcPrice(double, double);
void printCost(double, double, double, double, double);

int main(){
	cout << setprecision(2) << fixed;
	const double HOUR_RATE = 25.00;
	int rooms;
	double gallonPrice, totalGallons = 0, totalHours = 0;
	double paintCost, laborCost, totalCost;

	input(rooms, 1, "Enter the number of rooms (must be greater than 0): ", true);
	input(gallonPrice, 10, "Enter the price of paint per gallon (cannot be less than $10.00): $", true);

	for(int i = 1; i <= rooms; i++){
		double sqft;
		cout << "Room " << i << ": ";
		input(sqft, 0, "Enter the square footage of wall space (cannot be negative): ", true);
		totalGallons += calcGallons(sqft);
		totalHours += calcHours(sqft);
	}

	paintCost = calcPrice(totalGallons, gallonPrice);
	laborCost = calcPrice(totalHours, HOUR_RATE);
	totalCost = paintCost + laborCost;

	printCost(totalGallons, totalHours, paintCost, laborCost, totalCost);

	return 0;
}

void input(double &var, double bound, string prompt, bool lower){
	if(lower){
		do{
			cout << prompt;
			cin >> var;
		}while(var < bound);
	}
	else{
		do{
			cout << prompt;
			cin >> var;
		}while(var > bound);
	}
}

void input(int &var, int bound, string prompt, bool lower){
	if(lower){
		do{
			cout << prompt;
			cin >> var;
		}while(var < bound);
	}
	else{
		do{
			cout << prompt;
			cin >> var;
		}while(var > bound);
	}
}

double calcGallons(double squareFootage){
	return squareFootage / 110;
}

double calcHours(double squareFootage){
	return 8 * (squareFootage / 110);
}

double calcPrice(double value, double rate){
	return value * rate;
}

void printCost(double gallons, double hours, double paint, double labor, double total){
	cout << endl;
	cout << "Gallons of paint needed:  " << setw(6) << right << gallons << " gallons" << endl;
	cout << "Hours of labor needed  :  " << setw(6) << right << hours << " hours" << endl;
	cout << "Cost of paint          : $" << setw(6) << right << paint << endl;
	cout << "Cost of labor          : $" << setw(6) << right << labor << endl;
	cout << "Total cost             : $" << setw(6) << right << total << endl;
}
