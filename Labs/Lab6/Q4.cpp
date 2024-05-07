#include <iostream>
#include <vector>

using namespace std;

void inputVector(vector<int>& numbers);
void sortVector(vector<int>& numbers, int shift);

int main(){
	vector<int> nums;
	inputVector(nums);
	for(int i = 0; i < nums.size()-1; i++){
		sortVector(nums, i);
	}

	for(int i = 0; i < nums.size(); i++) cout << nums.at(i) << " ";
	return 0;
}

void inputVector(vector<int>& numbers){
	for(int i = 0; i < 10; i++){
		int input;
		do{
			cout << "Enter an integer (1-100): ";
			cin >> input;
		}while(input < 1 || input > 100);
		numbers.push_back(input);
	}
}

void sortVector(vector<int>& numbers, int shift){
	int mini = shift;
	for(int i = shift+1; i < numbers.size(); i++){
		if(numbers.at(i) < numbers.at(mini)) mini = i;
	}
	//UNCOMMENT THESES
	//numbers.insert(numbers.begin()+shift, numbers.at(mini));
	//numbers.erase(numbers.begin()+mini+1);
}
