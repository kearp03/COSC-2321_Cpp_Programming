#include "ShiftSupervisor.h"

ShiftSupervisor::ShiftSupervisor(){
	setSalary(0.0);
	setBonus(0.0);
}

ShiftSupervisor::ShiftSupervisor(string eName):Employee(eName){
	setSalary(0.0);
	setBonus(0.0);
}

ShiftSupervisor::ShiftSupervisor(string eName, int eNum):Employee(eName, eNum){
	setSalary(0.0);
	setBonus(0.0);
}

ShiftSupervisor::ShiftSupervisor(string eName, int eNum, string hD):Employee(eName, eNum, hD){
	setSalary(0.0);
	setBonus(0.0);
}

ShiftSupervisor::ShiftSupervisor(string eName, int eNum, string hD, double s):Employee(eName, eNum, hD){
	setSalary(s);
	setBonus(0.0);
}

ShiftSupervisor::ShiftSupervisor(string eName, int eNum, string hD, double s, double b):Employee(eName, eNum, hD){
	setSalary(s);
	setBonus(b);
}

void ShiftSupervisor::setSalary(double s){
	salary = s;
}

double ShiftSupervisor::getSalary() const{
	return salary;
}

void ShiftSupervisor::setBonus(double b){
	bonus = b;
}

double ShiftSupervisor::getBonus() const{
	return bonus;
}
