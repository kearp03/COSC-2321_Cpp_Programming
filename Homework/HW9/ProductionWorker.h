#ifndef PRODUCTIONWORKER_H_
#define PRODUCTIONWORKER_H_
#include "Employee.h"

class ProductionWorker : public Employee{
	private:
		int shift;
		double payRate;
	public:
		ProductionWorker();
		ProductionWorker(string);
		ProductionWorker(string eName, int eNum);
		ProductionWorker(string eName, int eNum, string hD);
		ProductionWorker(string eName, int eNum, string hD, int s);
		ProductionWorker(string eName, int eNum, string hD, double p);
		ProductionWorker(string, int, string, int, double);
		void setShift(int);
		int getShift() const;
		void setPayRate(double);
		double getPayRate() const;
};

#endif /* PRODUCTIONWORKER_H_ */
