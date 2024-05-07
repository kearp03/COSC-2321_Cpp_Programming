/**
 * 2. ShiftSupervisor Class
 * In a particular factory, a shift supervisor is a salaried employee who supervises a shift.
 * In addition to a salary, the shift supervisor earns a yearly bonus when his or her shift
 * meets production goals. Design a ShiftSupervisor class that is derived from the Employee
 * class you created in Problem 1. The ShiftSupervisor class should have a member variable that
 * holds the annual salary and a mem- ber variable that holds the annual production bonus that
 * a shift supervisor has earned. Write one or more constructors and the appropriate accessor
 * and mutator functions for the class. Demonstrate the class by writing a program that uses
 * a ShiftSupervisor object.
*/

#include <iostream>
#include <iomanip>
#include "ShiftSupervisor.h"

int main(){
	cout << "Enter the shift supervisor's name: ";
	string name; getline(cin, name);

	cout << "Enter the shift supervisor's hire date: ";
	string date; getline(cin, date);

	cout << "Enter the shift supervisor's number: ";
	int num; cin >> num;

	cout << "Enter the shift supervisor's salary: ";
	double sal; cin >> sal;

	cout << "Enter the shift supervisor's month bonus: ";
	double bonus; cin >> bonus;

	ShiftSupervisor shiftSuper(name, num, date, sal, bonus);

	cout << endl << endl;

	cout << "Shift Supervisor " << shiftSuper.getEmployeeName() << ":" << endl;
	cout << "Number: " << shiftSuper.getEmployeeNumber() << endl;
	cout << "Hired on " << shiftSuper.getHireDate() << endl;
	cout << "Salary: $" << fixed << setprecision(2) << shiftSuper.getSalary() << endl;
	cout << "Yearly bonus: $" << shiftSuper.getBonus() << endl;
}
