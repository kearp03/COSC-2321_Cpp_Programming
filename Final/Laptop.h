#ifndef LAPTOP_H_
#define LAPTOP_H_
#include "Computer.h"

class Laptop : public Computer{
private:
	bool touch;
public:
	Laptop();
	Laptop(string);
	Laptop(string, string);
	Laptop(string, string, string);
	Laptop(string, string, string, float);
	Laptop(string, string, string, float, bool);
	bool isTouch() const;
	void setTouch(bool);
};

#endif
