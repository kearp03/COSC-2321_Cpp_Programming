#include <iostream>
#include "Car.h"

using namespace std;

int main(){
	//declares variables
	int carYearModel;
	string carMake;
	//reads make and year model
	cout << "Enter the car's make: ";
	getline(cin, carMake);
	cout << "Enter the car's year model: ";
	cin >> carYearModel;

	//creates car object
	Car carObj(carYearModel, carMake);

	//accelerates 5 times
	cout << "Accelerating:" << endl;
	for(int i = 0; i < 5; i++){
		carObj.accelerate();
		cout << "Current speed: " << carObj.getSpeed() << endl;
	}

	cout << endl;

	//breaks 5 times
	cout << "Decelerating:" << endl;
	for(int i = 0; i < 5; i++){
		carObj.brake();
		cout << "Current speed: " << carObj.getSpeed() << endl;
	}
}
