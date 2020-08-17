//Un postulante a un empleo, realiza un test de capacitación, se obtuvo la
//siguiente información: cantidad total de preguntas que se le realizaron y
//la cantidad de preguntas que contestó correctamente. Se pide confeccionar un
//programa que ingrese los dos datos por teclado e informe el nivel del mismo
//según el porcentaje de respuestas correctas que ha obtenido, y sabiendo que:
//
//	Nivel máximo:	Porcentaje>=90%.
//	Nivel medio:	Porcentaje>=75% y <90%.
//	Nivel regular:	Porcentaje>=50% y <75%.
//	Fuera de nivel:	Porcentaje<50%.

#include<iostream>

using namespace std;

main()
{
  float num_perguntas , num_acertos, razao;
  cout << "Numero de perguntas: ";
  cin >> num_perguntas;
  cout << "Numero de acertos: ";
  cin >> num_acertos;
  razao = 100 * num_acertos / num_perguntas;
  //cout << razao;
  if (razao >= 90)
  {
    cout << "Nivel maximo";
  }
  else
  {
    if (razao >= 75)
    {
      cout << "Nivel medio";
    }
    else
    {
      if (razao >= 50)
      {
        cout << "Nivel regular";
      }
      else
      {
        cout << " Fora de nivel";
      }
    }

  }
cin.get();
cin.get();
}
