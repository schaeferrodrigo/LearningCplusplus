/**
* funtion to find the least multiple of n such that
* it is described by zero and one on basis 10
*/


#include <cmath>
#include <string>
#include <iostream>

#
#include "MULTIPLE.h"

using namespace std;

long long multiple_n( long n){
  string situation = "_not found_";
  long long i = 1;
  long long candidate;
  while (situation == "_not found_"){
    situation = "_searching_";
    candidate = n*i;
    cout << candidate<< endl;
    string str_candidate = to_string( n*i);
    long limite = str_candidate.length();
    for (long j = 0; j <= limite -1; j++){
      string str_algarism(1 , str_candidate[j]);
      int algarism = stoi(str_algarism);
      if (algarism>1){
        situation = "_not found_";
        break;
      }
      }
    i+=1;
    }
  return candidate;
}
