#include <iostream>
#include <string> 

using namespace std;

/*
Step 4: Print Crew Using Pointers
Objective: Write a function to print crew members using pointer arithmetic.
Instructions:

Create printCrew that takes a pointer to the array and its size.

Use pointer arithmetic to traverse the array.

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

	//Clean up memory

	for (int i = 0; i < numberMembers; i++) {
		delete crewArray[i];
	}

	delete[] crewArray;

	return 0;
}