#include <iostream>
#include "Days.h"

using namespace std;

int main(){
	Days day1(32);
	Days day2(26);

	cout << "Day 1: " << day1.getHours() << " hours is " << day1.getDays() << " days." << endl;
	cout << "Day 2: " << day2.getHours() << " hours is " << day2.getDays() << " days." << endl;

	cout << endl;

	Days temp = day1 + day2;
	cout << "Sum of the two Days: " << temp.getHours() << " hours is " << temp.getDays() << " days." << endl;

	temp = day1 - day2;
	cout << "Difference of the two Days: " << temp.getHours() << " hours is " << temp.getDays() << " days." << endl;

	cout << endl;

	temp = ++day1;
	cout << "Prefix increment: " << temp.getHours() << " hours is " << temp.getDays() << " days." << endl;;
	cout << "Current day1: " << day1.getHours() << " hours is " << day1.getDays() << " days." << endl;
	temp = day1++;
	cout << "Postfix increment: "<< temp.getHours() << " hours is " << temp.getDays() << " days." << endl;;
	cout << "Current day1: " << day1.getHours() << " hours is " << day1.getDays() << " days." << endl;

	cout << endl;

	temp = --day2;
	cout << "Prefix decrement: " << temp.getHours() << " hours is " << temp.getDays() << " days." << endl;;
	cout << "Current day2: " << day2.getHours() << " hours is " << day2.getDays() << " days." << endl;
	temp = day2--;
	cout << "Postfix decrement: "<< temp.getHours() << " hours is " << temp.getDays() << " days." << endl;;
	cout << "Current day2: " << day2.getHours() << " hours is " << day2.getDays() << " days." << endl;

}
