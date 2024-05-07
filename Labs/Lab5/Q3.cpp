#include <iostream>
#include <iomanip>

using namespace std;

int inputEmp();
int daysMissed(int);
double avgMissedDays(int, int);

int main(){
	int employees = inputEmp();
	double avgMissed = avgMissedDays(employees, daysMissed(employees));

	cout << setprecision(2) << fixed;
	cout << "Average number of days missed by an employee: " << avgMissed << endl;

	return 0;
}

int inputEmp(){
	int num;
	cout << "Enter the number of employees in the company: ";
	cin >> num;
	while(num < 1){
		cout << "Invalid, enter the number of employees in the company: ";
		cin >> num;
	}
	return num;
}

int daysMissed(int numOfEmp){
	int total = 0;
	cout << "Enter the number of days each employee missed:" << endl;
	for(int i = 1; i <= numOfEmp; i++){
		int temp;
		cout << "Employee " << i << ": ";
		cin >> temp;
		total += temp;
	}
	return total;
}

double avgMissedDays(int numOfEmp, int totalDaysMissed){
	return (double) totalDaysMissed / numOfEmp;
}
