#ifndef RETAILITEM_H_
#define RETAILITEM_H_
#include <string>

using namespace std;

class RetailItem{
	//private members
	private:
		string description;
		int unitsOnHand;
		double price;

	//public members
	public:
		RetailItem(string, int, double);

		void setDescription(string);
		void setUnitsOnHand(int);
		void setPrice(double);

		string getDescription() const;
		int getUnitsOnHand() const;
		double getPrice() const;
};

#endif /* RETAILITEM_H_ */
