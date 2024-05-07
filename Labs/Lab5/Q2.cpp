#include <iostream>
#include <iomanip>
#define SIZE 5

using namespace std;

void getScore(double&);
void calcAverage(double[]);
int findLowest(double[]);

int main(){
	double scores[SIZE];

	for(int i = 0; i < SIZE; i++){
		getScore(scores[i]);
	}

	calcAverage(scores);

	return 0;
}

void getScore(double &refScore){
	cout << "Enter score (0-100): ";
	cin >> refScore;

	while(refScore < 0 || refScore > 100){
		cout << "Invalid, enter score (0-100): ";
		cin >> refScore;
	}
}

void calcAverage(double avgScores[]){
	int minIndex = findLowest(avgScores);
	double sum = 0.0;

	for(int i = 0; i < SIZE; i++){
		if(i == minIndex) continue;
		sum += avgScores[i];
	}

	cout << setprecision(2) << fixed;
	cout << "Average score of highest " << SIZE-1 << "tests: " << sum/(SIZE-1) << endl;
}

int findLowest(double minScores[]){
	int minIndex = 0;
	for(int i = 1; i < SIZE; i++){
		if(minScores[i] < minScores[minIndex]) minIndex = i;
	}
	return minIndex;
}
