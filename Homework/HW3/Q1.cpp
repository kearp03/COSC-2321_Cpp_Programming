/**
 * 1. Ocean Levels
 * Assuming the ocean’s level is currently rising at about 1.5 millimeters
 * per year, write a program that displays a table showing the number of
 * millimeters that the ocean will have risen each year for the next
 * 25 years.
*/

#include <iostream>
#include <iomanip>

using namespace std;

const double OCEAN_RISING = 1.5;

int main(){
	cout << setprecision(1) << fixed;

	for(int i = 0; i <= 25; i++){
		cout << "Year " << i << ":  " << i*OCEAN_RISING << " Millimeters " << endl;
	}

	return 0;
}
