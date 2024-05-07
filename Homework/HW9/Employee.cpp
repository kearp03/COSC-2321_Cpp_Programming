#include "Employee.h"

Employee::Employee(){
	setEmployeeName("");
	setEmployeeNumber(0);
	setHireDate("");
}
Employee::Employee(string eName){
	setEmployeeName(eName);
	setEmployeeNumber(0);
	setHireDate("");
}
Employee::Employee(string eName, int eNum){
	setEmployeeName(eName);
	setEmployeeNumber(eNum);
	setHireDate("");
}

Employee::Employee(string eName, int eNum, string hD){
	setEmployeeName(eName);
	setEmployeeNumber(eNum);
	setHireDate(hD);
}

void Employee::setEmployeeName(string eName){
	employeeName = eName;
}

string Employee::getEmployeeName() const{
	return employeeName;
}

void Employee::setEmployeeNumber(int eNum){
	employeeNumber = eNum;
}

int Employee::getEmployeeNumber() const{
	return employeeNumber;
}

void Employee::setHireDate(string hD){
	hireDate = hD;
}

string Employee::getHireDate() const{
	return hireDate;
}
