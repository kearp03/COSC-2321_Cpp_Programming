/**
 * 3. TeamLeader Class
 * In a particular factory, a team leader is an hourly paid production worker who
 * leads a small team. In addition to hourly pay, team leaders earn a fixed monthly
 * bonus. Team leaders are required to attend a minimum number of hours of training
 * per year. Design a TeamLeader class that extends the ProductionWorker class you
 * designed in Programming Challenge 1. The TeamLeader class should have member
 * variables for the monthly bonus amount, the required number of training hours,
 * and the number of training hours that the team leader has attended. Write one
 * or more constructors and the appropriate accessor and mutator functions for
 * the class. Demonstrate the class by writing a program that uses a TeamLeader object.
*/

#include <iostream>
#include <iomanip>
#include "TeamLeader.h"

using namespace std;

int main(){
	cout << "Enter the team leader's name: ";
	string name; getline(cin, name);

	cout << "Enter the team leader's hire date: ";
	string date; getline(cin, date);

	cout << "Enter the team leader's number: ";
	int num; cin >> num;

	cout << "Enter the team leader's shift (1 for day shift, 2 for night shift): ";
	int shif; cin >> shif;

	cout << "Enter the team leader's pay rate: $";
	double rate; cin >> rate;

	cout << "Enter the team leader's monthly bonus: $";
	double bonus; cin >> bonus;

	cout << "Enter the required hours of training: ";
	int rTraining; cin >> rTraining;

	cout << "Enter the completed hours of training: ";
	int cTraining; cin >> cTraining;

	TeamLeader teamLead(name, num, date, shif, rate, bonus, rTraining, cTraining);

	cout << endl << endl;

	cout << "Employee " << teamLead.getEmployeeName() << ":" << endl;
	cout << "Number: " << teamLead.getEmployeeNumber() << endl;
	cout << "Hired on " << teamLead.getHireDate() << endl;
	cout << (teamLead.getShift() != 0 ? (teamLead.getShift() == 1 ? "Day shift worker" : "Night shift worker") : "Error: shift not initialized") << endl;
	cout << "Hourly pay rate: $" << fixed << setprecision(2) << teamLead.getPayRate() << endl;
	cout << "Monthly bonus: $" << teamLead.getBonus() << endl;
	cout << "Required training hours: " << teamLead.getRequiredTraining() << endl;
	cout << "Completed training hours: " << teamLead.getCompletedTraining() << endl;
}
