#include "PTriple.h"
#include <iostream>
#include <cmath>  
#include <set>
using namespace std;

/*
FIND ALL PRIMITIVE PYTHAGOREN TRIPLES (a,b,c) WHICH 0<=a<=b<=c<=N where N is specified by the user
*/


int main(){
  set<PTriple> table;
  long N;

  cout << "Please enter N  ";
  cin >> N;
  if (N==0) return 0;

   long rootN = long(sqrt(double(N))); 

  for(long m = 1; m <= rootN; m++){
    for(long n = 1; n <= rootN; n++){
      PTriple P = PTriple(m,n);
      if (P.getC() <= N){
        table.insert(P);
      }
    }
  }
  //sort(table, table+index); // sort( name_of_table, name_of_table + number_of_elements) 
  

  set<PTriple>::iterator si;
  for(si=table.begin();si !=table.end();si++){
    cout <<*si <<endl;
  }
  

  
  return 0;
}
