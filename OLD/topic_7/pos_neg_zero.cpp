//Se ingresa por teclado un valor entero, mostrar una leyenda que indique si
//el número es positivo, negativo o nulo (es decir cero)

#include<iostream>

using namespace std;

main()
{
  int num;
  cout << "Numero: ";
  cin >> num ;
  if (num > 0)
  {
    cout << "Positivo";
  }
  else
  {
    if ( num < 0 )
    {
      cout << "Negativo";
    }
    else
    {
      cout << "Zero";
    }
  }
cin.get();
cin.get();
}
