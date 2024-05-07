#include <iostream>

using namespace std;

template <class T>
T abs(T num){
	if(num < 0) num *= -1;
	return num;
}

int main(){
	cout << "Enter 2 integers:" << endl;
	for(int i = 0; i < 2; i++){
		int num;
		cout << ":";
		cin >> num;
		cout << "Absolute value: " << abs(num) << endl;
	}

	cout << "Enter 2 doubles:" << endl;
	for(int i = 0; i < 2; i++){
		double num;
		cout << ":";
		cin >> num;
		cout << "Absolute value: " << abs(num) << endl;
	}
}
