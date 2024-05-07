#include <string>
#include "Car.h"

//constructor
Car::Car(int yM, string m){
	yearModel = yM;
	make = m;
	speed = 0;
}

//getters
int Car::getYearModel() const{return yearModel;}

string Car::getMake() const{return make;}

int Car::getSpeed() const{return speed;}

//speed modifying functions
//adds 5 to speed
void Car::accelerate(){speed += 5;}

//takes 5 to speed
void Car::brake(){speed -= 5;}
