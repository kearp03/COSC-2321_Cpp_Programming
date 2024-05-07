#include "Days.h"

Days::Days(int h){
	setHours(h);
	updateDays();
}

void Days::setHours(int h){
	hours = h;
}

int Days::getHours() const{
	return hours;
}

void Days::updateDays(){
	days = hours / 8.0;
}

double Days::getDays() const{
	return days;
}

//addition
Days Days::operator+(const Days& right){
	Days temp(0);
	temp.hours = this->hours + right.hours;
	temp.updateDays();
	return temp;
}

//subtraction
Days Days::operator-(const Days& right){
	Days temp(0);
	temp.hours = this->hours - right.hours;
	temp.updateDays();
	return temp;
}

//prefix increment
Days& Days::operator++(){
	++hours;
	updateDays();
	return *this;
}

//postfix increment
Days Days::operator++(int){
	Days temp = *this;
	++* this;
	temp.updateDays();
	return temp;
}

//prefix decrement
Days& Days::operator--(){
	--hours;
	updateDays();
	return *this;
}

//postfix decrement
Days Days::operator--(int){
	Days temp = *this;
	--* this;
	temp.updateDays();
	return temp;
}
