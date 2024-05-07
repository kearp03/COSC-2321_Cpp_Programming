/**
 * 2. Freezing and Boiling Points
 * Design a class that stores a temperature in a temperature member
 * variable and has the appropriate accessor and mutator functions.
 * In addition to appropriate constructors, the class should have the
 * following member functions:
 * 		• isEthylFreezing . This function should return the bool value
 * 							true if the temperature stored in the
 * 							temperature field is at or below the freezing
 * 							point of ethyl alcohol. Otherwise, the function
 * 							should return false .
 * 		• isEthylBoiling . 	This function should return the bool value
 * 						   	true if the temperature stored in the
 * 						   	temperature field is at or above the boiling
 * 							point of ethyl alcohol. Otherwise, the
 * 							function should return false .
 * 		• isOxygenFreezing . This function should return the bool value
 * 							true if the temperature stored in the
 * 							temperature field is at or below the freezing
 * 							point of oxygen. Otherwise, the function
 * 							should return false .
 * 		• isOxygenBoiling . This function should return the bool
 * 							value true if the temperature stored in the
 * 							temperature field is at or above the boiling
 * 							point of oxygen. Otherwise, the function should
 * 							return false .
 * 		• isWaterFreezing . This function should return the bool value
 * 							true if the temperature stored in the
 * 							temperature field is at or below the freezing
 * 							point of water. Otherwise, the function should
 * 							return false .
 * 		• isWaterBoiling . 	This function should return the bool value
 * 							true if the temperature stored in the
 * 							temperature field is at or above the boiling
 * 							point of water. Otherwise, the function should
 * 							return false .
 * Write a program that demonstrates the class. The program should ask
 * the user to enter a temperature and then display a list of the
 * substances that will freeze at that temperature and those that
 * will boil at that temperature. For example, if the temperature is −20
 * the class should report that water will freeze and oxygen will boil
 * at that temperature.
*/

#include <iostream>
#include "BoilingFreezing.h"

using namespace std;

int main(){
	double temperature;
	cout << "Enter a temperature: ";
	cin >> temperature;

	BoilingFreezing bf(temperature);

	if(bf.isEthylFreezing()){
		cout << "Ethyl alcohol will freeze" << endl;
	}

	if(bf.isEthylBoiling()){
		cout << "Ethyl alcohol will boil" << endl;
	}

	if(bf.isOxygenFreezing()){
		cout << "Oxygen will freeze" << endl;
	}

	if(bf.isOxygenBoiling()){
		cout << "Oxygen will boil" << endl;
	}

	if(bf.isWaterFreezing()){
		cout << "Water will freeze" << endl;
	}

	if(bf.isWaterBoiling()){
		cout << "Water will boil" << endl;
	}
}
