/**
 * 3. Writing a list of sales
 * Write a program that will open (create) a new file named "sales.txt",
 * and will do this: 
 * a) Ask the user how many days of sales will be registered (integer).
 * b) Write in the file this number in a single line.
 * c) Make a loop for all days on which the program will:
 * - Ask for the sales for the next day (float).
 * - Write in the file a line with the sales.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream outfile;
	outfile.open("sales.txt");
	int days;

	cout << "Enter the number of days of sales to be entered: ";
	cin >> days;
	outfile << days << endl;

	for(int i = 1; i <= days; i++){
		double sales;
		cout << "Enter day " << i << " sales: ";
		cin >> sales;
		outfile << sales << endl;
	}

	outfile.close();
	return 0;
}
