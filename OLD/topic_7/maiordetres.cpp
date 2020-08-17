//Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor
// de ellos.

#include<iostream>

using namespace std;

main()
{
  float num1 , num2 , num3;
  cout <<  "Primeiro Número: ";
  cin >> num1;
  cout << "Segundo Número: ";
  cin >> num2;
  cout << "Terceiro Número: ";
  cin >> num3;
  if (num1 > num2)
  {
    if (num1 > num3)
    {
      cout << num1 ;
    }
    else
    {
      cout << num3;
    }
  }
  else
  {
    if (num2 > num3)
    {
      cout << num2;
    }
    else
    {
      cout << num3;
    }
  }
cin.get();
cin.get();
}
