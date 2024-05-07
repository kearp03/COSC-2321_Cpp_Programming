#include <iostream>
#include <iomanip>

using namespace std;

//Weather structure definition
struct Weather{
	//member variables
	double rainfall;
	double highTemp;
	double lowTemp;
	double avgTemp;

	//input method for Weather structure
	void readWeather(){
		cout << "Total rainfall: ";
		cin >> rainfall;
		cout << "High temperature: ";
		cin >> highTemp;
		while(highTemp < -100 || highTemp > 140){
			cout << "Input must be within -100 to 140" << endl;
			cout << "High temperature: ";
			cin >> highTemp;
		}
		cout << "Low temperature: ";
		cin >> lowTemp;
		while(lowTemp < -100 || lowTemp > 140){
			cout << "Input must be within -100 to 140" << endl;
			cout << "Low temperature: ";
			cin >> lowTemp;
		}
		avgTemp = (highTemp + lowTemp) / 2;
	}
};

//Function Prototypes
void readYearInfo(Weather[], int&, int&);
string monthName(int);
void display(const Weather&, double, int, int);

//main function
int main(){
	Weather year[13] = {{0.0, -101, 141, 0.0}};
	double avgRain;
	int highMonth = -1, lowMonth = -1;

	readYearInfo(year, highMonth, lowMonth);

	avgRain = year[0].rainfall / 12;

	display(year[0], avgRain, highMonth, lowMonth);
}

//function to read the entire years weather information
void readYearInfo(Weather year[], int &highMonth, int &lowMonth){
	for(int i = 1; i < 13; i++){
		cout << monthName(i) << ":" << endl;
		year[i].readWeather();

		year[0].rainfall += year[i].rainfall;
		year[0].avgTemp += year[i].avgTemp;

		if(year[i].highTemp > year[0].highTemp){
			year[0].highTemp = year[i].highTemp;
			highMonth = i;
		}

		if(year[i].lowTemp < year[0].lowTemp){
			year[0].lowTemp = year[i].lowTemp;
			lowMonth = i;
		}
		cout << endl;
	}
	year[0].avgTemp /= 12;
}

//function to display the yearly information
void display(const Weather &yearlyTotal, double avgRain, int highMonth, int lowMonth){
	cout << fixed << setprecision(2);
	cout << "Average monthly rainfall   : " << avgRain << endl;
	cout << "Total rainfall             : " << yearlyTotal.rainfall << endl;
	cout << "Highest temperature        : " << yearlyTotal.highTemp << " in " << monthName(highMonth) << endl;
	cout << "Lowest temperature         : " << yearlyTotal.lowTemp << " in " << monthName(lowMonth) << endl;
	cout << "Average monthly temperature: " << yearlyTotal.avgTemp << endl;
}

//function to convert an int index to a string month name
string monthName(int month){
	switch(month){
	case 1:  return "January";
	case 2:  return "February";
	case 3:  return "March";
	case 4:  return "April";
	case 5:  return "May";
	case 6:  return "June";
	case 7:  return "July";
	case 8:  return "August";
	case 9:  return "September";
	case 10: return "October";
	case 11: return "November";
	case 12: return "December";
	default: return "";
	}
}
