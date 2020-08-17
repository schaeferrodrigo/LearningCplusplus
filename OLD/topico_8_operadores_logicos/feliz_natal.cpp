//Realizar un programa que pida cargar una fecha cualquiera, luego verificar
//si dicha fecha corresponde a Navidad.
//-----------------------------------------------------------------------------
#include<iostream>
using namespace std;
//-----------------------------------------------------------------------------
main()
{
  int dia , mes;
  cout << " Dia ";
  cin >> dia ;
  cout << " Mês ";
  cin >> mes;
  if (dia == 25 and mes == 12 )
  {
    cout << "Feliz Natal!";
  }
  else
  {
    cout << " Ainda nao é natal";
  }
  cin.get();
  cin.get();
}
