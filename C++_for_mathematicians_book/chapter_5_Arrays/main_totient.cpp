#include <iostream>
#include "totient.h"
#include "sieve.h"
using namespace std;


int main(){
  const long N =100;

  long primes[10*N];
  sieve( 10*N , primes );
  for (long k =1; k < 100 ; k++){
    cout << k <<"\t"<< totient( k , primes ) << endl;
  }
  return 0;
}
