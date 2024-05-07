#ifndef PATIENT_H_
#define PATIENT_H_
#include <iostream>
#include "Person.h"

class Patient : public Person{
	private:
		int ID;
		string attendingPhy;
		double fee;
	public:
		Patient();
		Patient(string n, int id);
		void setID(int id);
		int getID() const;
		void setAttendingPhy(string ap);
		string getAttendingPhy() const;
		void setFee(double f);
		double getFee() const;
		void printAll() const;
};

#endif /* PATIENT_H_ */
