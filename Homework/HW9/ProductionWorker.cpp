#include "ProductionWorker.h"

ProductionWorker::ProductionWorker():Employee(){
	setShift(0);
	setPayRate(0.0);
}

ProductionWorker::ProductionWorker(string eName):Employee(eName){
	setShift(0);
	setPayRate(0.0);
}

ProductionWorker::ProductionWorker(string eName, int eNum):Employee(eName, eNum){
	setShift(0);
	setPayRate(0.0);
}
ProductionWorker::ProductionWorker(string eName, int eNum, string hD):Employee(eName, eNum, hD){
	setShift(0);
	setPayRate(0.0);
}
ProductionWorker::ProductionWorker(string eName, int eNum, string hD, int s):Employee(eName, eNum, hD){
	setShift(s);
	setPayRate(0.0);
}
ProductionWorker::ProductionWorker(string eName, int eNum, string hD, double p):Employee(eName, eNum, hD){
	setShift(0);
	setPayRate(p);
}

ProductionWorker::ProductionWorker(string eName, int eNum, string hD, int s, double p):Employee(eName, eNum, hD){
	setShift(s);
	setPayRate(p);
}

void ProductionWorker::setShift(int s){
	shift = s;
}

int ProductionWorker::getShift() const{
	return shift;
}

void ProductionWorker::setPayRate(double p){
	payRate = p;
}

double ProductionWorker::getPayRate() const{
	return payRate;
}
