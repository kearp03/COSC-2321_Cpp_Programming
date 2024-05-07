#include <iostream>
#include <fstream>
#include <set>
#include "Computer.h"
#include "Desktop.h"
#include "Laptop.h"

int main(void){
	ifstream infile;
	try{
		infile.open("Computers.txt");
		if(!infile) throw 0;
	}
	catch(int){
		cout << "File cannot be opened";
		exit(0);
	}

	set<Computer> compList;

	string type;
	while(infile >> type){
		Computer temp;

		string brand; infile >> brand;
		string model; infile >> model;
		string storage; infile >> storage;
		float cpu; infile >> cpu;

		if(type != "Desktop" && type != "Laptop"){
			cout << "Non-Desktop and Non-Laptop Detected" << endl;
			continue;
		}
		else if(type == "Desktop"){
			temp = Desktop(brand, model, storage, cpu);
		}
		else if(type == "Laptop"){
			temp = Laptop(brand, model, storage, cpu);
		}

		try{
			if(compList.begin() != compList.end() && compList.find(temp) != compList.end()) throw 0;
			compList.insert(temp);
		}
		catch(int){
			cout << "Duplicate Computer Detected" << endl;
		}
	}

	cout << "Enter a computer model to search for: ";
	string searchModel; cin >> searchModel;
	for(auto element : compList){
		if(element.getModel() == searchModel){
			cout << element.getBrand() << endl;
			cout << element.getModel() << endl;
			cout << element.getStorage() << endl;
			cout << element.getCPU() << endl;
		}
	}
	return 0;
}
