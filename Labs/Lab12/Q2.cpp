#include <iostream>
#include <iomanip>
#include "Project.h"
#include <map>

int menu();
void init_map(map<string, Project>&);
void add_proj(map<string, Project>&);
void delete_proj(map<string, Project>&, string);
void display_proj(map<string, Project>&, string);
void display_less(map<string, Project>&, double);
void display_all(map<string, Project>&);

int main(){
	map<string, Project> projects;

	init_map(projects);

	while(true){
		cout << endl;
		string n;
		int c = menu();
		switch(c){
		case(1):
			cout << "Enter the name of a project to display: ";
			getline(cin, n);
			display_proj(projects, n);
			break;
		case(2):
			cout << "Enter the name of a project to delete: ";
			getline(cin, n);
			delete_proj(projects, n);
			break;
		case(3):
			add_proj(projects);
			break;
		case(4):
			cout << "Enter a maximum budget: ";
			double max; cin >> max;
			cin.ignore(1, '\n');
			display_less(projects, max);
			break;
		case(5):
			display_all(projects);
			break;
		case(6):
			exit(0);
		default:
			cout << "Invalid option" << endl;
		}
	}
}

int menu(){
	cout << "Please choose one of the following:" << endl;
	cout << "1: Display a project" << endl;
	cout << "2: Delete a project" << endl;
	cout << "3: Add a project" << endl;
	cout << "4: Display projects less than or equal to specified budget" << endl;
	cout << "5: Display all projects" << endl;
	cout << "6: Quit" << endl;
	cout << ":";
	int choice; cin >> choice;
	cin.ignore(1, '\n');
	return choice;
}

void init_map(map<string, Project>& proj){
	cout << "Initialize three projects:" << endl;
	for(int i = 1; i <= 3; i++){
		add_proj(proj);
		cout << endl;
	}
}

void add_proj(map<string, Project>& proj){
	cout << "Enter the name of the project: ";
	string name; getline(cin, name);
	cout << "Enter the description of the project: ";
	string desc; getline(cin, desc);
	cout << "Enter the budget: $";
	double budget; cin >> budget;
	cin.ignore(1, '\n');
	Project project_i(name, desc, budget);
	proj[name] = project_i;
}

void delete_proj(map<string, Project>& proj, string key){
	if(proj.count(key)){
		proj.erase(key);
	}
}

void display_proj(map<string, Project>& proj, string key){
	if(proj.count(key)){
		cout << proj[key].getName() << ":" << endl;
		cout << proj[key].getDescription() << endl;
		cout << "Budget: $" << fixed << setprecision(2) << proj[key].getBudget() << endl;
		cout << endl;
	}
	else{
		cout << "Project does not exist";
	}
}

void display_less(map<string, Project>& proj, double max){
	for(map<string, Project>::iterator iter = proj.begin(); iter != proj.end(); iter++){
		if((*iter).second.getBudget() <= max){
			cout << (*iter).second.getName() << ":" << endl;
			cout << (*iter).second.getDescription() << endl;
			cout << "Budget: $" << fixed << setprecision(2) << (*iter).second.getBudget() << endl;
			cout << endl;
		}
	}
}

void display_all(map<string, Project>& proj){
	for(map<string, Project>::iterator iter = proj.begin(); iter != proj.end(); iter++){
		cout << (*iter).second.getName() << ":" << endl;
		cout << (*iter).second.getDescription() << endl;
		cout << "Budget: $" << fixed << setprecision(2) << (*iter).second.getBudget() << endl;
		cout << endl;
	}
}
