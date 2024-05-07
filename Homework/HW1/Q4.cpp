/**
 * 4. Energy Drink Consumption
 * A soft drink company recently surveyed 16,500 of its customers and found that
 * approximately 15 percent of those surveyed purchase one or more energy drinks per week.
 * Of those customers who pur- chase energy drinks, approximately 58 percent of them prefer
 * citrus-flavored energy drinks. Write a program that displays the following:
	• The approximate number of customers in the survey who purchase one or more energy drinks per week
	• The approximate number of customers in the survey who prefer citrus-flavored energy drinks
*/

#include <iostream>

using namespace std;

int main(){
	int people = 16500;

	cout << "Approximately " << people*.15 << " customers purchase one or more energy drinks per week" << endl;

	cout << "Approximately " << people*.15*.58 << " customers in the survey prefer citrus-flavored energy drinks" << endl;

	return 0;
}
