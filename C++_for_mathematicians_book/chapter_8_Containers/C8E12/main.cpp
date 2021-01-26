#include <iostream>
#include "print_set.h"
#include <set>

using namespace std;

int main(){

  set<long> S;
  S.insert(1);
  S.insert(3);
  S.insert(9);
  cout<<S;
  return 0;
}
