/**
 * 1. Population
 * In a population, the birth rate is the percentage increase of the
 * population due to births, and the death rate is the percentage
 * decrease of the population due to deaths. Write a program that
 * displays the size of a population for any number of years. The
 * program should ask for the following data:
 * 		• The starting size of a population
 * 		• The annual birth rate
 * 		• The annual death rate
 * 		• The number of years to display
 * Write a function that calculates the size of the population for a year.
 * The formula is: N = P + BP − DP where N is the new population size,
 * P is the previous population size, B is the birth rate, and D is the
 * death rate.
 * Input Validation: Do not accept numbers less than 2 for the starting
 * size. Do not accept negative numbers for birth rate or death rate.
 * Do not accept numbers less than 1 for the number of years.
*/

#include <iostream>

using namespace std;

int calcPopulation(int, double, double);

int main(){
	int population, years;
	double birthRate, deathRate;

	do{
		cout << "Enter the starting population (cannot be less than 2): ";
		cin >> population;
	} while(population < 2);

	do{
		cout << "Enter the birth rate (must be greater than 0): ";
		cin >> birthRate;
	} while(birthRate < 0);

	do{
		cout << "Enter the death rate (must be greater than 0): ";
		cin >> deathRate;
	} while(deathRate < 0);

	do{
		cout << "Enter how many years you want displayed (must be greater than 1): ";
		cin >> years;
	} while(years < 1);

	cout << "Year\t\t\tPopulation" << endl;
	for(int i = 0; i <= years; i++){
		cout << i << ":\t\t\t" << population << endl;
		population = calcPopulation(population, birthRate, deathRate);
	}

	return 0;
}

int calcPopulation(int pop, double bRate, double dRate){
	return pop * (1 + bRate - dRate);
}
