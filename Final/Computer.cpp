#include "Computer.h"

Computer::Computer(){
	setBrand("");
	setModel("");
	setStorage("");
	setCPU(0);
}

Computer::Computer(string b){
	setBrand(b);
	setModel("");
	setStorage("");
	setCPU(0);
}

Computer::Computer(string b, string m){
	setBrand(b);
	setModel(m);
	setStorage("");
	setCPU(0);
}

Computer::Computer(string b, string m, string s){
	setBrand(b);
	setModel(m);
	setStorage(s);
	setCPU(0);
}

Computer::Computer(string b, string m, string s, float c){
	setBrand(b);
	setModel(m);
	setStorage(s);
	setCPU(c);
}

string Computer::getBrand() const{
	return brand;
}

void Computer::setBrand(string b){
	brand = b;
}

string Computer::getModel() const{
	return model;
}

void Computer::setModel(string m){
	model = m;
}

string Computer::getStorage() const{
	return storage;
}

void Computer::setStorage(string s){
	storage = s;
}

float Computer::getCPU() const{
	return cpu;
}

void Computer::setCPU(float c){
	cpu = c;
}

bool Computer::operator<(const Computer& rhs) const{
	return (this->model < rhs.model);
}
