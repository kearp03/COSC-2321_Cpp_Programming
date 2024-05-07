//1. Box Office
//A movie theater only keeps a percentage of the revenue earned from ticket sales. The remainder
//goes to the movie distributor. Write a program that calculates a theater’s gross and net box office
//profit for a night. The program should ask for the name of the movie, and how many adult and child
//tickets were sold. (The price of an adult ticket is $10.00 and a child’s ticket is $6.00.) It should display
//a report similar to
//Movie Name:   “Wheels of Fury”
//Adult Tickets Sold:    382
//Child Tickets Sold:    127
//Gross Box Office Profit:   $ 4582.00
//Net Box Office Profit:    $ 916.40
//Amount Paid to Distributor:   $ 3665.60
//NOTE: Assume the theater keeps 20 percent of the gross box office profit.


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	//Data Declaration
	int adultTickets = 0, childTickets = 0, adultPrice = 10, childPrice = 6;
	double gross = 0.0, net = 0.0, distributorCost = 0.0, theaterPercent = 0.2;
	string movieName;

	//Input Data
	cout << "Enter movie title: ";
	getline(cin, movieName);
	cout << "Enter adult tickets sold: ";
	cin >> adultTickets;
	cout << "Enter child tickets sold: ";
	cin >> childTickets;

	//Calculate Revenue
	gross = (adultTickets * adultPrice) + (childTickets * childPrice);
	net = gross * theaterPercent;
	distributorCost = gross - net;

	//Print report
	cout << setprecision(2) << fixed;
	cout << left << setw(30) << "Movie Name:" << "\"" << movieName << "\"" << endl;
	cout << left << setw(30) << "Adult Tickets Sold:" << adultTickets << endl;
	cout << left << setw(30) << "Child Tickets Sold:" << childTickets << endl;
	cout << left << setw(30) << "Gross Box Office Profit:" << gross << endl;
	cout << left << setw(30) << "Net Box Office Profit:" << net << endl;
	cout << left << setw(30) << "Amount paid to the Distributor:" << distributorCost << endl;

	return 0;
}
