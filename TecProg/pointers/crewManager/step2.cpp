#include <iostream>
#include <string> 

using namespace std;

/*
Step 2: Initialize a Crew Member via Function
Objective: Use a function to initialize a CrewMember using pointers.
Instructions:

Write initializeCrewMember that takes a pointer to a CrewMember and initializes its fields.
*/

struct CrewMember {
	string name;
	string role;
	int yearsOfService;
};

void initializeCrewMember(CrewMember* member , string name, string role, int years) {
	
	member->name = name;
	member->role = role;
	member->yearsOfService = years;
};



int main() {

	CrewMember* ptrCrew = new CrewMember;

	initializeCrewMember(ptrCrew, "Riley", "Pilot", 5);


	cout << "Member Register:" << endl;
	cout << " Name: " << ptrCrew->name << endl;
	cout << " Role: " << ptrCrew->role << endl;
	cout << " Years of service: " << ptrCrew->yearsOfService << endl;

	delete ptrCrew;

	return 0;
}