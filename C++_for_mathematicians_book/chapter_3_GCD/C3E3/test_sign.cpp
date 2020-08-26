/*
* Test sign function
*/
#include <iostream>
#include "SIGN.h"

using namespace std;

int main(){
  double x;
  cout << "Type a number: ";
  cin >> x;
  cout << " The sign of your number is " << sign_arg(x);
  return 0;
}
