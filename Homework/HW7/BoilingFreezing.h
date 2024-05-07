#ifndef BOILINGFREEZING_H_
#define BOILINGFREEZING_H_

class BoilingFreezing{
	//private members
	private:
		double temp;

	//public members
	public:
		BoilingFreezing(double t) {temp = t;}

		void setTemp(double t)	{temp = t;}
		double getTemp() const	{return temp;}

		bool isEthylFreezing() const	{return temp <= -173;}
		bool isEthylBoiling() const		{return temp >= 172;}
		bool isOxygenFreezing() const	{return temp <= -362;}
		bool isOxygenBoiling() const	{return temp >= -306;}
		bool isWaterFreezing() const	{return temp <= 32;}
		bool isWaterBoiling() const		{return temp >= 212;}
};

#endif /* BOILINGFREEZING_H_ */
