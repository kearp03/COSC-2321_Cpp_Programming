/**
 * 1.EmployeeandProductionWorker Classes
 * Design a class named Employee. The class should keep the following information in
 * 		• Employee name
 * 		• Employee number
 * 		• Hire date
 * Write one or more constructors and the appropriate accessor and mutator functions
 * for the class. Next, write a class named ProductionWorker that is derived from the Employee class.
 * The ProductionWorker class should have member variables to hold the following information: 
 * 		• Shift (an integer)
 * 		• Hourly pay rate (a double )
 * The workday is divided into two shifts: day and night. The shift variable will hold an integer
 * value representing the shift that the employee works. The day shift is shift 1, and the night
 * shift is shift 2. Write one or more constructors and the appropriate accessor and mutator functions
 * for the class. Demonstrate the classes by writing a program that uses a ProductionWorker object.
*/

#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"

int main(){
	cout << "Enter the production worker's name: ";
	string name; getline(cin, name);

	cout << "Enter the production worker's hire date: ";
	string date; getline(cin, date);

	cout << "Enter the production worker's number: ";
	int num; cin >> num;

	cout << "Enter the production worker's shift (1 for day shift, 2 for night shift): ";
	int shif; cin >> shif;

	cout << "Enter the production worker's pay rate: ";
	double rate; cin >> rate;

	ProductionWorker prodWorker(name, num, date, shif, rate);

	cout << endl << endl;

	cout << "Production Worker " << prodWorker.getEmployeeName() << ":" << endl;
	cout << "Number: " << prodWorker.getEmployeeNumber() << endl;
	cout << "Hired on " << prodWorker.getHireDate() << endl;
	cout << (prodWorker.getShift() != 0 ? (prodWorker.getShift() == 1 ? "Day shift worker" : "Night shift worker") : "Error: shift not initialized") << endl;
	cout << "Hourly pay rate: $" << fixed << setprecision(2) << prodWorker.getPayRate() << endl;
}
