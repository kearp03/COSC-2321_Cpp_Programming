#ifndef SHIFTSUPERVISOR_H_
#define SHIFTSUPERVISOR_H_
#include "Employee.h"

class ShiftSupervisor : public Employee{
	private:
		double salary,bonus;
	public:
		ShiftSupervisor();
		ShiftSupervisor(string);
		ShiftSupervisor(string, int);
		ShiftSupervisor(string, int, string);
		ShiftSupervisor(string, int, string, double);
		ShiftSupervisor(string, int, string, double, double);
		void setSalary(double);
		double getSalary() const;
		void setBonus(double);
		double getBonus() const;
};

#endif /* SHIFTSUPERVISOR_H_ */
