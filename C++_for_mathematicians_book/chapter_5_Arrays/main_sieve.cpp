#include "sieve.h"
#include <iostream>

using namespace std;

int main(){
  const long N = 1e+7;
  const long TABLE_SIZE = 800000;
  
  long primes[TABLE_SIZE];
  long np = sieve(N,primes);

  cout << "We found " << np << " primes" <<endl;

  cout <<"The first 10 primes are these: "<<endl;
  for (long k=0; k<10; k++) cout << primes[k]<<" ";

  cout << "the largest prime we found is " << primes[np-1]<< endl;
  
 return 0;
}

