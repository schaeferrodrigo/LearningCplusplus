#include "sieve.h"



long sieve(long n , long* primes){
  
  if (n<2) return 0; //no primes unless n is at least 2

  char* theSieve;
  theSieve = new char[n+1]; // hold the marks

  // names of marks to put in the Sieve
  
  const char blank = 0;
  const char marked = 1; 

  //make sure thesieve is blank to begin
  
  for( long k =2; k<= n; k++ ) theSieve[k] = blank;

  long index = 0; //index into the prime array

  for(long k =2 ; k<= n; k++){
    if (theSieve[k]== blank){
      theSieve[k] = marked;
      primes[index] = k;
      index++;
     
     for(long d = 2*k; d<= n; d+=k) theSieve[d] = marked;
     }
  }
  delete[] theSieve;
  return index;
}
