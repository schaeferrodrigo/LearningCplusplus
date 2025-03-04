#include <iostream>
#include <string> 

using namespace std;

/*
Step 5: Modify a Crew Member via Pointer
Objective: Update a crew member’s role using a double pointer.
Instructions:

Write a function promoteCrewMember that takes a CrewMember** and updates the role.

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

void printCrew(CrewMember** members, int size) {

	cout << "Member Register:\n" << endl;
	
	for (int i = 0; i < size; i++) {
		cout << " Name: " << (*(members+i))->name << endl;
		cout << " Role: " << (*(members + i))->role << endl;
		cout << " Years of service: " << (*(members + i))->yearsOfService << endl;
		cout << " --------------------------------------------------------" << endl;
	}

}

void promoteCrewMember(CrewMember** members, int size ,string name, string newRole) {

	bool  if_exists = false;
	for (int i = 0 ; i < size; i++) {
		
		if ( (*(members+i))->name == name) {

			(*(members + i))->role = newRole;

			if_exists = true;
			cout <<"\n" << (*(members + i))->name << " was promoted to " << (*(members + i))->role <<"\n"<< endl;
		}
	}

	if (if_exists == false) {
		cout <<"\n" << name << " is not registered. Please, check if the name is correct.\n" << endl;
	}

}


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
	
	printCrew(crewArray, numberMembers);

	promoteCrewMember(crewArray, numberMembers, "Rile", "Captain");

	printCrew(crewArray, numberMembers);

	//Clean up memory

	for (int i = 0; i < numberMembers; i++) {
		delete crewArray[i];
	}

	delete[] crewArray;

	return 0;
}