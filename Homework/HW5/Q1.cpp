/**
 * 1. Majors
 * Read in student records from a file student.txt into a 2D array
 * of strings for name (with spaces) and major (words separared
 * with underscore). As well as a 1D array of integers for number
 * of credits completed.
 * File looks like this:
 * 3
 * Computer_Science 55 John Smith
 * Business_Management 32 Joe Doe
 * Computer_Science 45 Katy Perry
 * 
 * Find all students with the major ‘Computer_Science’.
 * For each student individually concatenate the student record
 * found into a single string and print to screen, with this order:
 * name, major, credits.
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	ifstream infile;
	infile.open("student.txt");

	int count; infile >> count;
	infile.ignore('\n');

	string students[2][count];
	int credits[count];

	for(int i = 0; i < count; i++){
		getline(infile, students[1][i], ' ');
		infile >> credits[i];
		getline(infile, students[0][i], '\n');
		students[0][i].erase(0, 1);
	}

	for(int i = 0; i < count; i++){
		if(students[1][i] == "Computer_Science"){
			string temp;
			temp = students[0][i] + " " + students[1][i] + " " + to_string(credits[i]);
			cout << temp << endl;
		}
	}
}
