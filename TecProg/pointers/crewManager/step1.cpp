#include <iostream>
#include <string> 

using namespace std;

/*
Step 1: Create a CrewMember Struct
Objective: Define a struct to store crew member details.
Instructions:

Create a CrewMember struct with name (string), role (string), and yearsOfService (int).

Use pointers to access the struct’s fields


*/

struct CrewMember {
	string name;
	string role;
	int yearsOfService;
};



int main() {

	CrewMember* ptrCrew = new CrewMember;
	ptrCrew->name = "Riley";
	ptrCrew->role = "Pilot";
	ptrCrew->yearsOfService = 5;

	cout << "Member Register:" << endl;
	cout << " Name: " << ptrCrew->name << endl;
	cout << " Role: " << ptrCrew->role << endl;
	cout << " Years of service: " << ptrCrew->yearsOfService << endl;

	delete ptrCrew;

	return 0;
}