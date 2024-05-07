#include "Laptop.h"

Laptop::Laptop() : Computer("", "", "", 0.0){
	setTouch(false);
}

Laptop::Laptop(string b) : Computer(b, "", "", 0.0){
	setTouch(false);
}

Laptop::Laptop(string b, string m) : Computer(b, m, "", 0.0){
	setTouch(false);
}

Laptop::Laptop(string b, string m, string s) : Computer(b, m, s, 0.0){
	setTouch(false);
}

Laptop::Laptop(string b, string m, string s, float c) : Computer(b, m, s, c){
	setTouch(false);
}

Laptop::Laptop(string b, string m, string s, float c, bool t) : Computer(b, m, s, c){
	setTouch(t);
}

bool Laptop::isTouch() const{
	return touch;
}
void Laptop::setTouch(bool t){
	touch = t;
}
