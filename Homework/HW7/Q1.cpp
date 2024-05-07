/**
 * 1. RetailItem Class
 * Write a class named RetailItem that holds data about an item in a
 * retail store. The class should have the following member variables:
 * 		• description . A string that holds a brief description of the item.
 * 		• unitsOnHand . An int that holds the number of units currently
 * 						in inventory.
 * 		• price . A double that holds the item’s retail price.
 * Write a constructor that accepts arguments for each member variable,
 * appropriate mutator func- tions that store values in these member
 * variables, and accessor functions that return the values in these
 * member variables. Once you have written the class, write a separate
 * program (different file) that creates three RetailItem objects and
 * stores the following data in them.
*/

#include <iostream>
#include <iomanip>
#include "RetailItem.h"

using namespace std;

int main(){
	cout << setprecision(2) << fixed;
	RetailItem items[] = {  RetailItem("Jacket", 12, 59.95),
							RetailItem("Designer Jeans", 40, 34.95),
							RetailItem("Shirt", 20, 24.95)   };

	for(int i = 0; i < 3; i++){
		cout << "Item #" << (i+1);
		cout << ": " << items[i].getDescription();
		cout << ", " << items[i].getUnitsOnHand() << " units";
		cout << ", $" << items[i].getPrice() << endl;
	}
}
