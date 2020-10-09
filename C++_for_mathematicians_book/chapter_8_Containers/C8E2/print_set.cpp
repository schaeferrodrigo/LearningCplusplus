#include "print_set.h"
#include <iostream>
#include <set>

using namespace std;



ostream& operator<<(ostream& os , const set<long>& S){
  
  set<long>::iterator si;
  os << "{ ";
  for(si = S.begin(); si != S.end(); si++){
    if (si != S.begin()){
      os << " , ";
    }     
   os << *si;
  }
  os << " }";
  return os;
}

