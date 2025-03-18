#include <iostream>
#include <vector>
#include <string>

/*

Function	Description
push_back(val)	Adds val to the end
pop_back()	Removes last element
size()	Returns the number of elements
capacity()	Returns allocated storage
empty()	Checks if the vector is empty
at(index)	Accesses an element with bounds checking
front() / back()	Returns first/last element
insert(pos, val)	Inserts val at position pos
erase(pos)	Removes element at pos
clear()	Removes all elements
resize(n)	Resizes the vector to size n

*/




/*
1) Declarar e inicializar los siguientes conjuntos de elementos haciendo uso del contenedor 
librería STL. 
- v1: vector de 5 elemento
- v2: vector de 10 elementos de tipo entero inicializados en 
- v3: {10,9,8,7,6,5,4,3,2,1}
- v4: 
{"Gertrudiz","Pancracia"
- v5: vector que contiene la misma información que v3
- v6: vector que contiene la información de personas. Para cada persona se tiene el nombre, la 
fecha de nacimiento y su dni. Inicializarlo en el momento de la declaración con 3 personas con 
datos inventados.

*/

struct Person{
    std::string name;
    std::string birthDate;
    std::string DNI;

};

int main(){

    std::vector<int> v1(5);
    std::vector<int> v2(10,0);

    std::vector<int> v3 = {10,9,8,7,6,5,4,3,2,1};
    std::vector<std::string> v4 = {"Gertrudiz","Pancracia", "Anacleto", "Hipolito", "Eustaquio", "Fulgencia" };
    std::vector<int> v5 = v3;

    std::vector<Person> v6 = {
        {"Juan Pérez", "15/04/1990", "12345678A"},
        {"María López", "22/07/1985", "87654321B"},
        {"Carlos Gómez", "10/01/2000", "56781234C"}
    };


   return 0;
}