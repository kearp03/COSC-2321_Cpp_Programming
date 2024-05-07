/**
 * 1. How Many Widgets?
 * The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each.
 * Write a program that calculates how many widgets are stacked on a pallet,
 * based on the total weight of the pallet. The program should ask the user how
 * much the pallet weighs by itself and with the widgets stacked on it.
 * It should then calculate and display the number of widgets stacked on the pallet.
*/

#include <iostream>

using namespace std;

int main(){
	const double WIDGET_WEIGHT = 12.5;
	double palletWeight, totalWeight;
	int numberOfWidgets;

	cout << "Enter the weight of the pallet by itself (in pounds): ";
	cin >> palletWeight;

	cout << "Enter the weight of the pallet with the widgets (in pounds): ";
	cin >> totalWeight;

	numberOfWidgets = (totalWeight - palletWeight) / WIDGET_WEIGHT;

	cout << "Number of widgets: " << numberOfWidgets << endl;

	return 0;
}
