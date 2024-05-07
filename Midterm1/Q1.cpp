#include <iostream>

using namespace std;

int main(){
	//initializes n and reads user input
	int n = 0;
	cout << "Enter an integer: ";
	cin >> n;

	//loops through n times
	for(int i = 0; i < n; i++){
		//adds +'s, starts at one +,
		//then increments how many +'s each pass
		for(int j = 0; j <= i; j++)
			cout << "+";
		//adds -'s, starts at n-1,
		//then decrements how many -'s each pass
		for(int k = 0; k < (n-i-1); k++)
			cout << "-";
		//line break before the next pass
		cout << endl;
	}

	return 0;
}
