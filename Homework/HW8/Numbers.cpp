#include <iostream>
#include <string>
#include "Numbers.h"

string Numbers::units[] = {	"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
							"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string Numbers::tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
string Numbers::powers[] = {"hundred", "thousand"};

Numbers::Numbers(int num){
	if(num >= 0) number = num;
	else number = 0;
}

void Numbers::print() const{
	int temp = number;
	string description = "";

	int current = temp % 100;
	if(current < 20) description = units[current];
	else description = tens[current/10] + "-" + units[current%10];
	temp /= 100;

	int count = 0;
	while(temp != 0){
		current = temp % 10;
		if(current != 0) description = units[current] + " " + powers[count] + " " + description;
		temp /= 10;
		count++;
	}

	cout << description << endl;
}
