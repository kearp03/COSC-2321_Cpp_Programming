#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream infile;
	int age;
	string name;

	cout << " Name\t\t\tAge" << endl;

	infile.open("students.txt");

	while(infile >> age){
		getline(infile, name);
		cout << name << "\t\t" << age << endl;
	}

	infile.close();

	return 0;
}
