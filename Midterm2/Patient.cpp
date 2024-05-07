#include "Patient.h"
#include <iomanip>

Patient::Patient() : Person(""){
	setID(0);
	setAttendingPhy("");
	setFee(0.0);
}

Patient::Patient(string n, int id) : Person(n){
	setID(id);
	setAttendingPhy("");
	setFee(0.0);
}

void Patient::setID(int id){
	ID = id;
}

int Patient::getID() const{
	return ID;
}

void Patient::setAttendingPhy(string ap){
	attendingPhy = ap;
}

string Patient::getAttendingPhy() const{
	return attendingPhy;
}

void Patient::setFee(double f){
	fee = f;
}

double Patient::getFee() const{
	return fee;
}

void Patient::printAll() const{
	cout << "Name: " << getName() << endl;
	cout << "ID: " << ID << endl;
	cout << "Attending Physician: " << attendingPhy << endl;
	cout << "Fee: $" << fixed << setprecision(2) << fee << endl;
}
