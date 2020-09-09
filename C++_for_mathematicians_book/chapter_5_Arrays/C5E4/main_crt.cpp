#include "crt.h"
#include <iostream>

using namespace std;

int main(){
  long a_1 , a_2 , n_1 , n_2 , solution, module;
  a_1 =3;
  n_1 = 20;
  a_2 = 5;
  n_2 = 9;

  solution = crt(a_1 , n_1 , a_2 , n_2 , module);
  cout << "The solution for  x =" << a_1 << " mod " << n_1<< " and x =" << a_2 << " mod " <<n_2<< " is:" << endl;
  cout << solution <<" mod " <<module << endl; 
 return 0;
}
