#include <iostream>
#include <iomanip>

using namespace std;

double totalCharge(int, double, double, double);
double totalCharge(double, double);

int main(){
	cout << setprecision(2) << fixed;
	string choice;
	double medCharge, hospCharge, total = 0.0;
	cout << "Enter whether you were admitted as an in-patient or an out-patient: ";
	getline(cin, choice);
	cout << "Enter the medication charges: $";
	cin >> medCharge;
	while(medCharge < 0){
		cout << "Invalid, enter the medication charges: $";
		cin >> medCharge;
	}
	cout << "Enter the hospital service charges: $";
	cin >> hospCharge;
	while(hospCharge < 0){
		cout << "Invalid, enter the medication charges: $";
		cin >> medCharge;
	}
	if(choice == "in-patient"){
		int days;
		double rate;
		cout << "Enter the number of days spent in the hospital: $";
		cin >> days;
		while(days < 0){
			cout << "Invalid, enter the number of days spent in the hospital: $";
			cin >> days;
		}
		cout << "Enter the daily rate for the hospital: $";
		cin >> rate;
		while(rate < 0){
			cout << "Invalid, enter the daily rate for the hospital: $";
			cin >> rate;
		}
		total = totalCharge(days, rate, medCharge, hospCharge);
	}
	else if(choice == "out-patient"){
		total = totalCharge(medCharge, hospCharge);
	}
	cout << "Your total charge is: $" << total << endl;
	return 0;
}

double totalCharge(int days, double rate, double medCharge, double hospCharge){
	return (days * rate) + totalCharge(medCharge, hospCharge);
}

double totalCharge(double medCharge, double hospCharge){
	return medCharge + hospCharge;
}
