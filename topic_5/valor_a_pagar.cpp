//4 Se debe desarrollar un programa que pida el ingreso del precio de un
//artículo y la cantidad que lleva el cliente. Mostrar lo que debe abonar el
//comprador

#include<iostream>

using namespace std;

main()
{
    int quantidade;
    float preco, valor_a_pagar;
    cout <<"Preço do produto:";
    cin >>preco;
    cout <<"Quantidade em estoque:";
    cin >>quantidade;
    valor_a_pagar = preco * quantidade ;
    cout <<"O valor a pagar é:";
    cout <<valor_a_pagar;
    cin.get();
    cin.get();
}
