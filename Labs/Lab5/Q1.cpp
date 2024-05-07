#include <iostream>
#include <iomanip>

using namespace std;

double celsius(int);

int main(){
	cout << setprecision(2) << fixed;

	for(int i = 0; i <= 20; i++){
		cout << "Fahrenheit: " << i << "\t converts to Celsius: " << celsius(i) << endl;
	}
	return 0;
}

double celsius(int f){
	return (5.0/9.0)*(f-32.0);
}
