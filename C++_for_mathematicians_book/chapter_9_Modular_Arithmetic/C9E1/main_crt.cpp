#include "crt.h"
#include "../Mod.h"
#include <iostream>

using namespace std;

int main(){
  // long a_1 , a_2 , n_1 , n_2 , solution, module;
  // a_1 =3;
  // n_1 = 20;
  // a_2 = 5;
  // n_2 = 9;
  Mod a, b ,solution;

  a= Mod(3,20);
  b = Mod(5,9);


  solution = crt(a,b);
  cout << "The solution for  x =" << a.get_val() << " mod " << a.get_mod()<< " and x =" << b.get_val() << " mod " <<b.get_mod()<< " is:" << endl;
  cout << solution.get_val() <<" mod " <<solution.get_mod() << endl;
 return 0;
}
