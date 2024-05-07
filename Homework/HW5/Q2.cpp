/**
 * 2. Shopping List
 * Prompt the user to input the number of items on a shopping list
 * and dynamically allocate an array to hold the name of the item
 * and the price of the item. Calculate the subtotal and total with
 * 6.25% sales tax. Print the receipt for each item name, item price,
 * subtotal and total.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	cout << fixed << setprecision(2);
	cout << "Enter how many items did you purchase: ";
	int count; cin >> count;

	string *namesPtr = new string[count];
	double *pricesPtr = new double[count];
	double total = 0.0;
	cin.ignore();
	for(int i = 0; i < count; i++){
		cout << "Item name: ";
		getline(cin, namesPtr[i]);
		cout << "Item price: $";
		cin >> pricesPtr[i];
		cin.ignore();
	}

	cout << endl;

	for(int i = 0; i < count; i++){
		cout << namesPtr[i] << "\t\t$" << pricesPtr[i] << endl;
		total += pricesPtr[i];
	}
	cout << endl << "Subtotal:\t$" << total << endl;
	total *= 1.0625;
	cout << "Total\t\t$" << total << endl;

	delete [] namesPtr;
	delete [] pricesPtr;
}
