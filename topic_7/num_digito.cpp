//Confeccionar un programa que permita cargar un número entero positivo de hasta
//tres cifras y muestre un mensaje indicando si tiene 1, 2, o 3 cifras. Mostrar un mensaje de error si el número de cifras es mayor.

#include<iostream>

using namespace std;

main()
{
  int num;
  cout << "Número";
  cin >> num;
  if (num <= 999)
  {
    if (num >= 100)
    {
      cout << " 3 dígitos ";
    }
    else
    {
      if (num >= 10)
      {
        cout << " 2 digitos";
      }
      else
      {
        cout << "1 digito";
      }
    }
  }
  else
  {
    cout << "Erro";
  }
cin.get();
cin.get();
}
