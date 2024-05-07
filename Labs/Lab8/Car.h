#ifndef CAR_H_
#define CAR_H_

using namespace std;

class Car{
	// private members
	private:
		int yearModel;
		string make;
		int speed;

	// public members
	public:
		//constructor
		Car(int, string);
		//getters
		int getYearModel() const;
		string getMake() const;
		int getSpeed() const;
		//speed modifying methods
		void accelerate();
		void brake();
};

#endif /* CAR_H_ */
