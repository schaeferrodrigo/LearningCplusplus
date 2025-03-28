#include <iostream>
#include <string> 


/*
Step 7: Delte a Crew Member to the Dynamic Array
Objective: Resize the dynamic array to delete a new member.

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

bool lookForByName(CrewMember** members, int size , std::string name, int &index){

	for (index ; index < size ; index++){

		if ((*(members+index))->name == name){

			return true;
		}
	}
	return false;

}

void promoteCrewMember(CrewMember** members, int size ,std::string name, std::string newRole) {

	int index = 0;

	bool  if_exists = lookForByName(members, size, name, index  );

	if(!if_exists){
		std::cout <<"\n" << name << " is not registered. Please, check if the name is correct.\n" << std::endl;
		return;
	}


	(*(members + index))->role = newRole;
	std::cout <<"\n" << (*(members + index))->name << " was promoted to " << (*(members + index))->role <<"\n"<< std::endl;

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


void removeCrewMember(CrewMember*** members, int* size, std::string name){

	int indexToBeDeleted = 0;
	bool foundMember = lookForByName(*members, *size, name, indexToBeDeleted);

	if (!foundMember){
		std::cout << " There is no " << name << " in crew register. Please, check if the name is correct."<< std::endl;
        return;
	}


	CrewMember** newArray = new CrewMember*[*size-1];

	int newIndex = 0;
	for (int i = 0; i < *size; i++){

		if(i != indexToBeDeleted){
           newArray[newIndex] = (*members)[i];
		   newIndex++;

		}

	}

	delete (*members)[indexToBeDeleted];
	delete[] *members;
	
	*members = newArray;
	(*size)--;
	
	std::cout << name<< " was removed"<<std::endl;

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
 
   promoteCrewMember(crewArray, numberMembers, "Riley", "Captain");

	printCrew(crewArray, numberMembers);
    
	int index = 0;
	bool status = lookForByName(crewArray, numberMembers,"Zara", index);
	std::cout<< status<<" " <<index <<std::endl; 


	//add New Member
    
	CrewMember* newMember = new CrewMember;
	initializeCrewMember(newMember, "Ana", "Mechanic", 2);
	addNewCrewMember(&crewArray, &numberMembers, newMember);
	printCrew(crewArray, numberMembers);


	// remove member

	removeCrewMember(&crewArray, &numberMembers, "Zara");
	printCrew(crewArray, numberMembers);

	

	//Clean up memory

	for (int i = 0; i < numberMembers; i++) {
		delete crewArray[i];
	}

	delete[] crewArray;

	return 0;
}