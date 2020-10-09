#include "print_set.h"
#include <iostream>
#include <set>

using namespace std;


int main(){
  
  set<long> T_1 , T_2 , T_3, T_4;

  T_1.insert(1);
  T_1.insert(2);
  T_1.insert(3);

  T_2.insert(-1);
  
  T_3.insert(0);
  T_3.insert(1);
  

  cout << T_1;
  cout << "   ";
  cout << T_2;
  cout << "   ";
  cout << T_3;
  cout << "   ";
  cout << T_4;
  cout << endl;
  return 0;  

}

