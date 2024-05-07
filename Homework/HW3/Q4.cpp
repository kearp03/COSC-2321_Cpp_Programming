/**
 * 4. Reading the list of sales
 * Write a program that will open, for reading the file of the previous
 * problem. 
 * a) The program will first read the number of days registered.
 * b) With this number, use a loop for reading the file:
 * 		- Displaying on the screen the sales of the next (aligned to the right, with a point).
 * 		- Add to a total variable the sales
 * c) Display the total and the average.
*/

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){
	ifstream infile;
	infile.open("sales.txt");

	cout << setprecision(2) << fixed;
	int days;
	double totalSales = 0.0;
	infile >> days;

	for(int i = 1; i <= days; i++){
		double sale;
		infile >> sale;
		cout << "Day " << i << " sales:  $" << setw(5) << right << sale << endl;
		totalSales += sale;
	}

	cout << "Total sales  : $" << setw(5) << right << totalSales << endl;
	cout << "Average sales: $" << setw(5) << right << (totalSales)/days << endl;

	infile.close();
	return 0;
}
