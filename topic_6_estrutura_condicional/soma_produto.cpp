// Realizar un programa que solicite la carga por teclado de dos números,
//si el primero es mayor al segundo informar su suma y diferencia,
// en caso contrario informar el producto y la división del primero respecto al
//segundo.

#include<iostream>

using namespace std;

main()
{
    float num1 , num2, soma, diferenca , produto , divisao;
    cout << "Primeiro Número:";
    cin >> num1;
    cout << "Segundo número:";
    cin >> num2;
    if (num1 > num2)
    {
      soma = num1 + num2;
      diferenca = num1 - num2;
      cout << "A soma e a diferença sao: ";
      cout << soma;
      cout << "  " ;
      cout << diferenca;
    }
    else
    {
      produto = num1 * num2;
      divisao = num1 / num2;
      cout << "O produto e a divisao desses dois números sao: ";
      cout << produto;
      cout << " ";
      cout << divisao;
    }
    cin.get();
    cin.get();
}
