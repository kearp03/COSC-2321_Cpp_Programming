#include "Desktop.h"

Desktop::Desktop() : Computer("", "", "", 0.0){
	setNumMonitors(0);
}
Desktop::Desktop(string b) : Computer(b, "", "", 0.0){
	setNumMonitors(0);
}
Desktop::Desktop(string b, string m) : Computer(b, m, "", 0.0){
	setNumMonitors(0);
}
Desktop::Desktop(string b, string m, string s) : Computer(b, m, s, 0.0){
	setNumMonitors(0);
}
Desktop::Desktop(string b, string m, string s, float c) : Computer(b, m, s, c){
	setNumMonitors(0);
}
Desktop::Desktop(string b, string m, string s, float c, int mon) : Computer(b, m, s, c){
	setNumMonitors(mon);
}

int Desktop::getNumMonitors() const{
	return numMonitors;
}

void Desktop::setNumMonitors(int num){
	numMonitors = num;
}
