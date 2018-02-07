//Se ingresan tres notas de un alumno, si el promedio es mayor o igual a siete
//mostrar un mensaje "Promocionado".

#include<iostream>

using namespace std;

main()
{
    float nota1 , nota2, nota3 , media;
    cout << "Primeira nota: ";
    cin >> nota1;
    cout << "Segunda nota: ";
    cin >> nota2;
    cout << "Terceira nota: ";
    cin >> nota3;
    media = (nota1 + nota2 + nota3)/3;
    if (media >= 7)
    {
      cout << "Aprovado ";
    }
    else
    {
      cout << "Reprovado";
    }
    cin.get();
    cin.get();
}
