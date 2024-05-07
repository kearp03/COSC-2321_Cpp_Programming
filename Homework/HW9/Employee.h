#include <string>
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

using namespace std;

class Employee {
	private:
		string employeeName, hireDate;
		int employeeNumber;
	public:
		Employee();
		Employee(string);
		Employee(string, int);
		Employee(string, int, string);
		void setEmployeeName(string);
		string getEmployeeName() const;
		void setEmployeeNumber(int);
		int getEmployeeNumber() const;
		void setHireDate(string);
		string getHireDate() const;
};

#endif /* EMPLOYEE_H_ */
