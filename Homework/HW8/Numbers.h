#ifndef NUMBERS_H_
#define NUMBERS_H_

using namespace std;

class Numbers{
	private:
		int number;
		static string units[20];
		static string tens[10];
		static string powers[2];
	public:
		Numbers(int);
		void print() const;
};

#endif /* NUMBERS_H_ */
