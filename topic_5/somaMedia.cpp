//3 Realizar un programa que lea cuatro valores numéricos e informar su suma y
//promedio.

#include<iostream>

using namespace std;

main()
{
    float num1, num2, num3 , num4 , soma , media;
    cout <<"Ingresse primero valor:";
    cin >>num1;
    cout <<"Ingresse segundo valor:";
    cin >>num2;
    cout <<"Ingresse terceiro valor:";
    cin >>num3;
    cout <<"Ingresse quarto valor:";
    cin >>num4;
    soma = num1 + num2 + num3 + num4;
    media = soma/4;
    cout <<"A soma dos quatros valores é:";
    cout <<soma;
    cout <<"\n";
    cout <<"A média dos quatros valores é:";
    cout <<media;
    cin.get();
    cin.get();
}
