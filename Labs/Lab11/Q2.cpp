#include <iostream>
#include <vector>

using namespace std;

void readRainfall(vector<double>&);
int minRainfall(const vector<double>&);
int maxRainfall(const vector<double>&);
string monthNames(int);

int main(){
	vector<double> months(1, 0);
	readRainfall(months);
	int maxMonth = maxRainfall(months), minMonth = minRainfall(months);

	cout << endl << endl;
	cout << "Total rainfall_________________: " << months[0] << endl;
	cout << "Monthly average________________: " << (months[0]/12) << endl;
	cout << "Month with highest rainfall____: " << monthNames(maxMonth) << " with " << months[maxMonth] << " inches of rain" << endl;
	cout << "Month with lowest rainfall_____: " << monthNames(minMonth) << " with " << months[minMonth] << " inches of rain" << endl;
}

void readRainfall(vector<double> &m){
	for(int i = 1; i <= 12; i++){
		double rain;
		do{
			cout << "Enter the rainfall for " << monthNames(i) << ": ";
			cin >> rain;
		} while(rain < 0);
		m.push_back(rain);
		m[0] += rain;
	}
}

int minRainfall(const vector<double> &m){
	int index = 1;
	for(int i = 2; i < m.size(); i++){
		if(m[i] < m[index]){
			index = i;
		}
	}
	return index;
}

int maxRainfall(const vector<double> &m){
	int index = 1;
	for(int i = 2; i < m.size(); i++){
		if(m[i] > m[index]){
			index = i;
		}
	}
	return index;
}

string monthNames(int mon){
	switch(mon){
	case(1):  return "January";
	case(2):  return "February";
	case(3):  return "March";
	case(4):  return "April";
	case(5):  return "May";
	case(6):  return "June";
	case(7):  return "July";
	case(8):  return "August";
	case(9):  return "September";
	case(10): return "October";
	case(11): return "November";
	case(12): return "December";
	default:  return "";
	}
}
