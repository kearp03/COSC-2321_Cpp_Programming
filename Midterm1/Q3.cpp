#include <iostream>
#include <vector>

using namespace std;

int main(){
	//initialize vectors
	vector<int> vec1, vec2;

	//initialize input to 0 to allow access to while loop
	int input = 0;
	//loops until input is -1
	while(input != -1){
		//read user input
		cout << "Enter an integer (-1 to stop): ";
		cin >> input;
		//add input to end of vec1
		vec1.push_back(input);
	}

	//loops through vec1 vector
	for(int i = 0; i < vec1.size(); i++){
		//stores current value of vec1 in temporary variable
		int current = vec1.at(i);
		//checks if the current element is greater than 10, if it is, add to the back of vec2
		if(current > 10) vec2.push_back(current);
	}

	//loops through vec2 vector
	for(int i = 0; i < vec2.size(); i++){
		//prints each element
		cout << vec2.at(i) << endl;
	}

	return 0;
}
