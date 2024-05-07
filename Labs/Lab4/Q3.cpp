#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int floors, totalRooms = 0, totalOccupied = 0;
	int rooms, occupied;

	cout << setprecision(2) << fixed;

	cout << "Enter the number of floors in the hotel: ";
	cin >> floors;

	for(int i = 1; i <= floors; i++){
		if(i == 13) continue;
		cout << "Floor " << i << ":" << endl;
		cout << "Enter the number of rooms: ";
		cin >> rooms;
		cout << "Enter the number of rooms occupied: ";
		cin >> occupied;

		totalRooms += rooms;
		totalOccupied += occupied;

		cout << endl;
	}

	cout << "The hotel has " << totalRooms << " rooms" << endl;
	cout << totalOccupied << " rooms are occupied" << endl;
	cout << totalRooms - totalOccupied << " rooms are unoccupied" << endl;
	cout << (1.0*totalOccupied/totalRooms)*100 << "% of the rooms are occupied" << endl;

	return 0;
}
