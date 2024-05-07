#include <iostream>

using namespace std;

template <class T>
T total(int);

int main(){
	cout << "Using integers: " << endl << total<int>(5)    << endl;
	cout << "Using doubles: "  << endl << total<double>(5) << endl;
}

template <class T>
T total(int n){
	T total = 0;
	for(int i = 0; i < n; i++){
		cout << "Enter a number: ";
		T num; cin >> num;
		total += num;
	}
	return total;
}
