#include <iostream>

using namespace std;

int main(){
	int n, sum = 0;

	cout << "Enter a positive integer: ";
	cin >> n;

	while(n <= 0){
		cout << "Error: Input must be positive" << endl;
		cout << "Enter a positive integer: ";
		cin >> n;
	}

	for(int i = 1; i <= n; i++)
		sum += i;
	cout << "The sum of 1-" << n << " is: " << sum << endl;

	return 0;
}
