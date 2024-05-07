#include "Patient.h"

int main(){
	Patient patientZero("John Smith", 321);

	cout << "Enter the attending physicians name: ";
	string phyName;
	getline(cin, phyName);
	patientZero.setAttendingPhy(phyName);

	try{
		cout << "Enter the total fee: ";
		double fee;
		cin >> fee;
		if(fee < 0) throw int(-1);
		patientZero.setFee(fee);
	}
	catch(int err){
		cout << "Error: fee cannot be negative" << endl;
	}

	cout << endl;

	patientZero.printAll();
}
