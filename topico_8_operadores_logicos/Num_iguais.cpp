//Se ingresan tres valores por teclado, si todos son iguales se imprime la
//suma del primero con el segundo y a este resultado se lo multiplica por el
//tercero.
//=====================
#include<iostream>
using namespace std;
//====================
main()
{
  float numero_1 , numero_2 , numero_3;
  cout << " Primeiro número";
  cin >> numero_1;
  cout << " Segundo número ";
  cin >> numero_2;
  cout << " Terceiro número ";
  cin >> numero_3;
  if (numero_1 == numero_2 and numero_1 == numero_3)
  {
    cout << (numero_1 + numero_2) * numero_3;
  }
  else
  {
    cout << " números diferentes";
  }
  cin.get();
  cin.get();
} 
