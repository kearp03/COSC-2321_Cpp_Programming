/**
 * 1. Movie Data
 * Write a program that uses a structure named MovieData to store the
 * following information about a movie:
 * Title
 * Director
 * Year Released
 * Running Time (in minutes)
 * The program should create two MovieData variables, store values
 * in their members, and pass each one, in turn, to a function that
 * displays the information about the movie in a clearly formatted
 * manner.
*/

#include <iostream>

using namespace std;

struct MovieData{
	string title,
		director;
	int yearReleased,
		runTime;
};

void displayMovieData(MovieData);

int main(){
	MovieData movie1 = {"Star Wars", "George Lucas", 1977, 121};
	MovieData movie2 = {"Spaceballs", "Mel Brooks", 1987, 96};

	displayMovieData(movie1);
	displayMovieData(movie2);
}

void displayMovieData(MovieData movie){
	cout << movie.title << ":" << endl;
	cout << "Director: " << movie.director << endl;
	cout << "Released in " << movie.yearReleased << endl;
	cout << "Runtime: " << movie.runTime << " minutes" << endl;
	cout << endl;
}
