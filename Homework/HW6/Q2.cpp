/**
 * 2. Movie Profit
 * Modify the Movie Data program written for problem 1 to include
 * two additional members that hold the movie’s production costs and
 * first-year revenues. Modify the function that displays the movie
 * data to display the title, director, release year, running time,
 * and first year’s profit or loss.
*/

#include <iostream>
#include <iomanip>

using namespace std;

struct MovieData{
	string title,
		director;
	int yearReleased,
		runTime;
	double productionCost,
		firstYearRevenue;
};

void displayMovieData(MovieData);

int main(){
	MovieData movie1 = {"Star Wars", "George Lucas", 1977, 121, 11000000, 775000000};
	MovieData movie2 = {"Spaceballs", "Mel Brooks", 1987, 96, 22700000, 38100000};

	displayMovieData(movie1);
	displayMovieData(movie2);
}

void displayMovieData(MovieData movie){
	cout << fixed << setprecision(2);
	cout << movie.title << ":" << endl;
	cout << "Director: " << movie.director << endl;
	cout << "Released in " << movie.yearReleased << endl;
	cout << "Runtime: " << movie.runTime << " minutes" << endl;
	cout << "First year profit: $" << (movie.firstYearRevenue-movie.productionCost) << endl;
	cout << endl;
}
