#include <iostream>
#include <string> 

using namespace std;

/*
Step 3: Create a Dynamic Array of Crew Members
Objective: Dynamically allocate an array of CrewMember pointers.
Instructions:

Use new to create an array of 3 CrewMember pointers.

Initialize each element with a dynamically allocated CrewMember.

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

	const int numberMembers = 3;

	CrewMember** crewArray = new CrewMember*[numberMembers];

	crewArray[0] = new CrewMember;
	crewArray[1] = new CrewMember;
	crewArray[2] = new CrewMember;


	initializeCrewMember(crewArray[0], "Riley", "Pilot", 5);
	initializeCrewMember(crewArray[1], "Zara", "Doctor", 2);
	initializeCrewMember(crewArray[2], "Kai", "Navigator", 5);


	//print Crew information
	cout << "Member Register:\n" << endl;
	for (int i = 0; i < numberMembers; i++) {
		cout << " Name: " << crewArray[i]->name << endl;
		cout << " Role: " << crewArray[i]->role << endl;
		cout << " Years of service: " << crewArray[i]->yearsOfService << endl;
		cout << " --------------------------------------------------------" << endl;
	}

	//Clean up memory

	for (int i = 0; i < numberMembers; i++) {
		delete crewArray[i];
	}

	delete[] crewArray;

	return 0;
}