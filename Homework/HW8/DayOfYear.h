#include <string>
#ifndef DAYOFYEAR_H_
#define DAYOFYEAR_H_

using namespace std;

class DayOfYear{
	private:
		int date;
		static string months[13];
		static int endingDays[13];

	public:
		DayOfYear(int);
		void print() const;
};

#endif /* DAYOFYEAR_H_ */
