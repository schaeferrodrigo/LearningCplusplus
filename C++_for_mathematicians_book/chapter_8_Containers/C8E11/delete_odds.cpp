#include <iostream>
#include <set>
#include "../C8E2/print_set.h"

using namespace std;


void delete_odds( set<long>& A){
  set<long> B;
  set<long>::iterator si;
  for(si = A.begin(); si != A.end(); si++){
    if(*si%2 == 0){
      B.insert(*si);
    }
  }
  A.clear();
  A = B;
}


int main(){
  set<long> A;
  for(int element = 0; element <=20; element++){
    A.insert(element);
  }
  delete_odds(A);
  cout<< A; 
}
