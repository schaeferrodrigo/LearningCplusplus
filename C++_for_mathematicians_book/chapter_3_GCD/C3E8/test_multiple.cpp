/*
* test of multiple
*/

#include <iostream>
#include "MULTIPLE.h"

using namespace std;

int main(){
  long n = 99;
  long long least_multiple = multiple_n( n );
  cout << "the least multiple is " << least_multiple;
}
