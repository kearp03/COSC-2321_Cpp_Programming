#ifndef TEAMLEADER_H_
#define TEAMLEADER_H_
#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker{
	private:
		double bonus;
		int requiredTraining, completedTraining;
	public:
		TeamLeader();
		TeamLeader(string);
		TeamLeader(string, int);
		TeamLeader(string, int, string);
		TeamLeader(string, int, string, int);
		TeamLeader(string, int, string, int, double);
		TeamLeader(string, int, string, int, double, double);
		TeamLeader(string, int, string, int, double, double, int);
		TeamLeader(string, int, string, int, double, double, int, int);
		void setBonus(double);
		double getBonus() const;
		void setRequiredTraining(int);
		int getRequiredTraining() const;
		void setCompletedTraining(int);
		int getCompletedTraining() const;

};

#endif /* TEAMLEADER_H_ */
