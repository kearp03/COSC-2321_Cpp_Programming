#include <iostream>
#include <string>
#include "DayOfYear.h"

string DayOfYear::months[] = {"Invalid Date", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int DayOfYear::endingDays[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

DayOfYear::DayOfYear(int d){
	date = d;
}

void DayOfYear::print() const{
	if(date <= 0){
		cout << months[0] << endl;
		return;
	}

	for(int i = 1; i < 13; i++){
		if(date <= endingDays[i]){
			cout << months[i] << " " << (date - endingDays[i-1]) << endl;
			return;
		}
	}

	cout << months[0] << endl;
}
