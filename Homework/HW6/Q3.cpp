/**
 * 3. Corporate Sales Data
 * Write a program that uses a structure to store the following data
 * on a company division: 
 * Division Name (such as East, West, North, or South)
 * First-Quarter Sales
 * Second-Quarter Sales
 * Third-Quarter Sales
 * Fourth-Quarter Sales
 * Total Annual Sales
 * Average Quarterly Sales
 * The program should use four variables of this structure. Each
 * variable should represent one of the following corporate
 * divisions: East, West, North, and South. The user should be asked
 * for the four quarters’ sales figures for each division. Each
 * division’s total and average sales should be calculated and stored
 * in the appropriate member of each structure variable. These figures
 * should then be dis- played on the screen.
 * Input Validation: Do not accept negative numbers for any sales figures.
*/

#include <iostream>
#include <iomanip>

using namespace std;

struct Division{
	string divName;
	double firstQ;
	double secondQ;
	double thirdQ;
	double fourthQ;
	double totalAnnual;
	double avgQSales;
};

void readAllDivisionSales(Division[]);
void readQuarterSales(double&, string);
void displayAllDivisionSales(Division[]);

int main(){
	Division company[] = {{"East"}, {"West"}, {"North"}, {"South"}};

	readAllDivisionSales(company);

	cout << endl << endl;

	displayAllDivisionSales(company);
}

void readAllDivisionSales(Division cmpy[]){
	for(int i = 0; i < 4; i++){
		cout << cmpy[i].divName << " Division:" << endl;
		readQuarterSales(cmpy[i].firstQ, "First");
		readQuarterSales(cmpy[i].secondQ, "Second");
		readQuarterSales(cmpy[i].thirdQ, "Third");
		readQuarterSales(cmpy[i].fourthQ, "Fourth");
		cmpy[i].totalAnnual = cmpy[i].firstQ + cmpy[i].secondQ + cmpy[i].thirdQ + cmpy[i].fourthQ;
		cmpy[i].avgQSales = cmpy[i].totalAnnual / 4;
		cout << endl;
	}
}

void readQuarterSales(double& sales, string quarter){
	cout << quarter << " sales: $";
	cin >> sales;
	while(sales < 0){
		cout << "Sales cannot be negative. Enter again:" << endl;
		cout << quarter << " sales: $";
		cin >> sales;
	}
}

void displayAllDivisionSales(Division cmpy[]){
	cout << fixed << setprecision(2);
	for(int i = 0; i < 4; i++){
		cout << cmpy[i].divName << " Division:" << endl;
		cout << "First Quarter sales : $" << cmpy[i].firstQ << endl;
		cout << "Second Quarter sales: $" << cmpy[i].secondQ << endl;
		cout << "Third Quarter sales : $" << cmpy[i].thirdQ << endl;
		cout << "Fourth Quarter sales: $" << cmpy[i].fourthQ << endl;
		cout << "Total sales         : $" << cmpy[i].totalAnnual << endl;
		cout << "Average sales       : $" << cmpy[i].avgQSales << endl;
		cout << endl;
	}
}
