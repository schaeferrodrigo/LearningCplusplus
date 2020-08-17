//2    Escribir un programa en el cual se ingresen cuatro números, calcular e
//informar la suma de los dos primeros y el producto del tercero y el cuarto.

#include<iostream>

using namespace std;

main()
{
    float num1, num2, num3, num4 , soma, produto;
    cout <<"Ingresse primero valor:";
    cin >>num1;
    cout <<"Ingresse segundo valor:";
    cin >>num2;
    cout <<"Ingresse terceiro valor:";
    cin >>num3;
    cout <<"Ingresse quarto valor:";
    cin >>num4;
    soma = num1 + num2;
    produto = num3 * num4;
    cout <<"A soma dos dois primeiros números é:";
    cout <<soma;
    cout <<"\n";
    cout <<"O produto dos dois últimos números é";
    cout <<produto;
    cin.get();
    cin.get();
}
