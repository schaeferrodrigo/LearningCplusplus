#include <iostream>
#include <string> 


/*
Step 8: Sort Crew by Years of Service
Objective: Use function pointers to sort the crew array.

*/

struct CrewMember {
	std::string name;
	std::string role;
	int yearsOfService;
};

void initializeCrewMember(CrewMember* member , std::string name, std::string role, int years) {
	
	member->name = name;
	member->role = role;
	member->yearsOfService = years;
};

void printCrew(CrewMember** members, int size) {

	std::cout << "Member Register:\n" << std::endl;
	
	for (int i = 0; i < size; i++) {
		std::cout << " Name: " << (*(members+i))->name << std::endl;
		std::cout << " Role: " << (*(members + i))->role << std::endl;
		std::cout << " Years of service: " << (*(members + i))->yearsOfService << std::endl;
		std::cout << " --------------------------------------------------------" << std::endl;
	}

}

void promoteCrewMember(CrewMember** members, int size ,std::string name, std::string newRole) {

	bool  if_exists = false;
	for (int i = 0 ; i < size; i++) {
		
		if ( (*(members+i))->name == name) {

			(*(members + i))->role = newRole;

			if_exists = true;
			std::cout <<"\n" << (*(members + i))->name << " was promoted to " << (*(members + i))->role <<"\n"<< std::endl;
		}
	}

	if (if_exists == false) {
		std::cout <<"\n" << name << " is not registered. Please, check if the name is correct.\n" << std::endl;
	}

}

void addNewCrewMember(CrewMember*** members, int* size, CrewMember* newMember){

	CrewMember** newArray = new CrewMember*[*size + 1];

	for(int i = 0; i < *size  ; i++){
		newArray[i]  = (*members)[i];	
	}

	newArray[*size] = newMember;
     
	delete[] *members;
	

	*members = newArray;

	
	(*size)++;

	std::cout<< "New member added.\n"<<std::endl;
}

bool compareByYearsOfService(CrewMember* a, CrewMember* b) {
    return a->yearsOfService < b->yearsOfService;
}


void sortCrew(CrewMember** members, int size, bool (*compareFunc)(CrewMember*, CrewMember*)) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (!compareFunc(members[j], members[j + 1])) {
                // Swap members[j] and members[j + 1]
                CrewMember* temp = members[j];
                members[j] = members[j + 1];
                members[j + 1] = temp;
            }
        }
    }
}


int main() {

	int numberMembers = 3;

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


	//add New Member
    
	CrewMember* newMember = new CrewMember;
	initializeCrewMember(newMember, "Ana", "Mechanic", 2);
	addNewCrewMember(&crewArray, &numberMembers, newMember);
	printCrew(crewArray, numberMembers);
	

	
	//Sort Crew members

	sortCrew(crewArray, numberMembers, compareByYearsOfService);
    std::cout << "\nAfter Sorting by Years of Service:\n";
    printCrew(crewArray, numberMembers);

	//Clean up memory

	for (int i = 0; i < numberMembers; i++) {
		delete crewArray[i];
	}

	delete[] crewArray;

	return 0;
}