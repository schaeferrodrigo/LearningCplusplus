#include <iostream>
#include "squareroot.h"


using namespace std;

int main(){
  SquareRoot u;
  u = SquareRoot( 5);
  cout << u;
  cout << u.get_integer()<< endl;
  cout <<u.dec_SquareRoot()<<endl;
  return 0;
}
