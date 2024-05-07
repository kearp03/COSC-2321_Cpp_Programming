#include "TeamLeader.h"

TeamLeader::TeamLeader():ProductionWorker(){
	setBonus(0.0);
	setRequiredTraining(0);
	setCompletedTraining(0);
}

TeamLeader::TeamLeader(string eName):ProductionWorker(eName){
	setBonus(0.0);
	setRequiredTraining(0);
	setCompletedTraining(0);
}

TeamLeader::TeamLeader(string eName, int eNum):ProductionWorker(eName, eNum){
	setBonus(0.0);
	setRequiredTraining(0);
	setCompletedTraining(0);
}

TeamLeader::TeamLeader(string eName, int eNum, string hD):ProductionWorker(eName, eNum, hD){
	setBonus(0.0);
	setRequiredTraining(0);
	setCompletedTraining(0);
}

TeamLeader::TeamLeader(string eName, int eNum, string hD, int s):ProductionWorker(eName, eNum, hD, s){
	setBonus(0.0);
	setRequiredTraining(0);
	setCompletedTraining(0);
}

TeamLeader::TeamLeader(string eName, int eNum, string hD, int s, double p):ProductionWorker(eName, eNum, hD, s, p){
	setBonus(0.0);
	setRequiredTraining(0);
	setCompletedTraining(0);
}

TeamLeader::TeamLeader(string eName, int eNum, string hD, int s, double p, double b):ProductionWorker(eName, eNum, hD, s, p){
	setBonus(b);
	setRequiredTraining(0);
	setCompletedTraining(0);
}

TeamLeader::TeamLeader(string eName, int eNum, string hD, int s, double p, double b, int rt):ProductionWorker(eName, eNum, hD, s, p){
	setBonus(b);
	setRequiredTraining(rt);
	setCompletedTraining(0);
}

TeamLeader::TeamLeader(string eName, int eNum, string hD, int s, double p, double b, int rt, int ct):ProductionWorker(eName, eNum, hD, s, p){
	setBonus(b);
	setRequiredTraining(rt);
	setCompletedTraining(ct);
}

void TeamLeader::setBonus(double b){
	bonus = b;
}

double TeamLeader::getBonus() const{
	return bonus;
}

void TeamLeader::setRequiredTraining(int rt){
	requiredTraining = rt;
}

int TeamLeader::getRequiredTraining() const{
	return requiredTraining;
}

void TeamLeader::setCompletedTraining(int ct){
	completedTraining = ct;
}

int TeamLeader::getCompletedTraining() const{
	return completedTraining;
}
