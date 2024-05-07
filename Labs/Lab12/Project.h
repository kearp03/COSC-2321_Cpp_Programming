#ifndef PROJECT_H_
#define PROJECT_H_
#include <string>
#include <map>

using namespace std;

class Project {
private:
	string name, description;
	double budget;

public:
	Project()
		{setName(""); setDescription(""); setBudget(0.0);}
	Project(string n)
		{setName(n); setDescription(""); setBudget(0.0);}
	Project(string n, string d)
		{setName(n); setDescription(d); setBudget(0.0);}
	Project(string n, string d, double b)
		{setName(n); setDescription(d); setBudget(b);}

	void setName(string n)
		{name = n;}
	string getName() const
		{return name;}

	void setDescription(string d)
		{description = d;}
	string getDescription() const
		{return description;}

	void setBudget(double b)
		{budget = b;}
	double getBudget() const
		{return budget;}
};

#endif /* PROJECT_H_ */
