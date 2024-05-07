/**
 * 3. Running the Race
 * Write a program that asks for the names of three runners and the time it took each
 * of them to finish a race. The program should display who came in first, second, and
 * third place.
 * Input Validation: Only accept positive numbers for the times.
*/

#include <iostream>

using namespace std;

bool validate(double time){
	if(time <= 0){
		cout << "Time cannot be less than or equal to 0" << endl;
		return true;
	}
	return false;
}

int main(){
	string runner1, runner2, runner3;
	double time1, time2, time3;

	cout << "Enter the name of the first runner: ";
	getline(cin, runner1);
	do{
		cout << "Enter the time for the first runner: ";
		cin >> time1;
	} while(validate(time1));

	cin.ignore();

	cout << "Enter the name of the second runner: ";
	getline(cin, runner2);
	do{
		cout << "Enter the time for the second runner: ";
		cin >> time2;
	} while(validate(time2));

	cin.ignore();

	cout << "Enter the name of the third runner: ";
	getline(cin, runner3);
	do{
		cout << "Enter the time for the third runner: ";
		cin >> time3;
	} while(validate(time3));

	if(time1 < time2 && time1 < time3){
		cout << "First place : " << runner1 << endl;
		if(time2 < time3){
			cout << "Second place: " << runner2 << endl;
			cout << "Third place : " << runner3 << endl;
		}
		else{
			cout << "Second place: " << runner3 << endl;
			cout << "Third place : " << runner2 << endl;
		}
	}
	else if(time2 < time1 && time2 < time3){
		cout << "First place : " << runner2 << endl;
		if(time1 < time3){
			cout << "Second place: " << runner1 << endl;
			cout << "Third place : " << runner3 << endl;
		}
		else{
			cout << "Second place: " << runner3 << endl;
			cout << "Third place : " << runner1 << endl;
		}
	}
	else{
		cout << "First place : " << runner3 << endl;
		if(time1 < time2){
			cout << "Second place: " << runner1 << endl;
			cout << "Third place : " << runner2 << endl;
		}
		else{
			cout << "Second place: " << runner2 << endl;
			cout << "Third place : " << runner1 << endl;
		}
	}

	return 0;
}
