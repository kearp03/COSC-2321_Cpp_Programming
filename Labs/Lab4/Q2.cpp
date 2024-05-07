#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int years = 6;
	double projected = 2500, increase = 0.04;

	cout << setprecision(2) << fixed;

	for(int i = 0; i < years; i++){
		projected += projected * increase;
		cout << "Year: " << i + 1 << " - Projected rate: $" << projected << endl;
	}

	return 0;
}
