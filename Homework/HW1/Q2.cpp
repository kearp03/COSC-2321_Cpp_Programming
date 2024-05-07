/**
 * 2. Rewrite problem 1 so the program asks the user how many gallons the car holds
 * and how many miles the car can travel with them. 
 * Only use integers.
*/

#include <iostream>

using namespace std;

int main(){
	int gallons;
	int miles;

	cout << "Enter how many gallons can your car hold: ";
	cin >> gallons;

	cout << "Enter how far your car can travel with a full tank: ";
	cin >> miles;

	cout << "Your miles per gallon: " << miles/gallons << " mpg." << endl;

	return 0;
}
