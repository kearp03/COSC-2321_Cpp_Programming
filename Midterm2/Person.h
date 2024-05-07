#ifndef PERSON_H_
#define PERSON_H_
#include <string>

using namespace std;

class Person {
	private:
		string name;
	public:
		Person(){name = "";}
		Person(string n){setName(n);}
		void setName(string n){name = n;}
		string getName() const{return name;}
};

#endif /* PERSON_H_ */
