#ifndef COMPUTER_H_
#define COMPUTER_H_
#include <string>

using namespace std;

class Computer {
private:
	string brand;
	string model;
	string storage;
	float cpu;
public:
	Computer();
	Computer(string);
	Computer(string, string);
	Computer(string, string, string);
	Computer(string, string, string, float);
	string getBrand() const;
	void setBrand(string);
	string getModel() const;
	void setModel(string);
	string getStorage() const;
	void setStorage(string);
	float getCPU() const;
	void setCPU(float);
	bool operator<(const Computer&) const;
};

#endif
