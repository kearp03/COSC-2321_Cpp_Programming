#ifndef COIN_H_
#define COIN_H_
#include <string>
using namespace std;

class Coin{
	private:
		string sideUp;

	public:
		Coin();
		void toss();
		string getSideUp() const;
};

#endif /* COIN_H_ */
