#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream outfile;
	string name;
	int age, students;

	outfile.open("students.txt");

	cout << "Enter how many students will be registered: ";
	cin >> students;

	cin.ignore();

	for(int i = 0; i < students; i++){
		cout << "Enter the name of the student: ";
		getline(cin, name);
		cout << "Enter the age of the student: ";
		cin >> age;
		cin.ignore();

		outfile << age << " " << name << endl;
	}
	outfile.close();

	return 0;
}
