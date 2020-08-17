//1    Realizar la carga del lado de un cuadrado, mostrar por pantalla el
//perímetro del mismo (El perímetro de un cuadrado se calcula multiplicando el
//valor del lado por cuatro)

#include<iostream>

using namespace std;

main()
{
    int lado , perimetro;
    cout <<"Lado do quadrado:";
    cin >>lado;
    perimetro = 4 * lado;
    cout <<"O perímetro do quadrado é :";
    cout << perimetro;
    cin.get();
    cin.get();
}
