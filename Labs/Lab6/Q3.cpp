#include <iostream>
#include <fstream>
#include <string>
#define SIZE 10

using namespace std;

void readFileIntoArray(string fileName, char charArray[]);
void compareArrays(char charArrayCorrect[], char charArrayStudent[], int resultIndices[]);
void displayReport(char charArrayCorrect[], char charArrayStudent[], int resultIndices[]);

int main(){
	char correctAnswers[SIZE], studentAnswers[SIZE];
	int resultIndices[SIZE] = {0};
	readFileIntoArray("CorrectAnswers.txt", correctAnswers);
	readFileIntoArray("StudentAnswers.txt", studentAnswers);
	compareArrays(correctAnswers, studentAnswers, resultIndices);
	displayReport(correctAnswers, studentAnswers, resultIndices);
	return 0;
}

void readFileIntoArray(string fileName, char charArray[]){
	ifstream fin;
	fin.open(fileName);

	if(fin){
		int i = 0;
		while(i < SIZE && fin >> charArray[i++]);
	}
	else{
		cout << "Error! File not found" << endl;;
	}

	fin.close();
	return;
}
void compareArrays(char charArrayCorrect[], char charArrayStudent[], int resultIndices[]){
	for(int i = 0; i < SIZE; i++){
		if(charArrayCorrect[i] == charArrayStudent[i]){
			resultIndices[i] = i;
		}
		else{
			resultIndices[i] = -1;
		}
	}
}
void displayReport(char charArrayCorrect[], char charArrayStudent[], int resultIndices[]){
	int count = 0;
	double percent;
	for(int i = 0; i < SIZE; i++){
		if(resultIndices[i] == -1){
			cout << "Question " << (i+1) << " wrong: " << charArrayStudent[i] << " -> " << charArrayCorrect[i] << endl;
			count++;
		}
	}
	percent = 100 - (100.0 * count / SIZE);
	cout << count << " questions missed" << endl;
	cout << percent << "% correct" << endl;
	cout << (percent >= 70 ? "Pass" : "Fail") << endl;
}
