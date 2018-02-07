//Se ingresa por teclado un número positivo de uno o dos dígitos (1..99) mostrar
// un mensaje indicando si el número tiene uno o dos dígitos.

#include<iostream>

using namespace std;

main()
{
    int num;
    cout << "Numero de 1 a 99: ";
    cin >> num;
    if (num >= 10)
    {
      cout << "Dois digitos ";
    }
    else
    {
      cout << "Um digito";
    }
    cin.get();
    cin.get();
}
