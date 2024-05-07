#include "RetailItem.h"
#include <string>

RetailItem::RetailItem(string d, int u, double p){
	setDescription(d);
	setUnitsOnHand(u);
	setPrice(p);
}

void RetailItem::setDescription(string d){
	description = d;
}

void RetailItem::setUnitsOnHand(int u){
	unitsOnHand = u;
}

void RetailItem::setPrice(double p){
	price = p;
}

string RetailItem::getDescription() const{
	return description;
}

int RetailItem::getUnitsOnHand() const{
	return unitsOnHand;
}

double RetailItem::getPrice() const{
	return price;
}
