#include "PTriple.h"
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

/*
FIND ALL PRIMITIVE PYTHAGOREN TRIPLES (a,b,c) WHICH 0<=a<=b<=c<=N where N is specified by the user
*/


int main(){
  PTriple* table;
  long N;

  cout << "Please enter N  ";
  cin >> N;
  if (N==0) return 0;

  table = new PTriple[N];

  long index = 0;
  long rootN = long(sqrt(double(N))); 

  for(long m = 1; m <= rootN; m++){
    for(long n = 1; n <= rootN; n++){
      PTriple P = PTriple(m,n);
      if (P.getC() <= N){
        table[index] = P;
        index++;
      }
    }
  }
  sort(table, table+index); // sort( name_of_table, name_of_table + number_of_elements) 
  

  for(int k=0; k< index ; k++){
    if(table[k] != table[k+1]){
      cout << table[k] <<endl; 
    }
  }
  
  delete[] table;
  
  return 0;
}
