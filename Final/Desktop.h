#ifndef DESKTOP_H_
#define DESKTOP_H_
#include "Computer.h"

class Desktop : public Computer{
private:
	int numMonitors;
public:
	Desktop();
	Desktop(string);
	Desktop(string, string);
	Desktop(string, string, string);
	Desktop(string, string, string, float);
	Desktop(string, string, string, float, int);
	int getNumMonitors() const;
	void setNumMonitors(int);
};

#endif
