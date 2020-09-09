//#include "factor.h"
#include "totient.h"


/*

long totient( long n ){
  if ( n <= 0) return 0;
  if (n == 1) return 1;


  long flist[100];
  long number_of_factors = factor( n , flist);
  long ans = 1;

  for (long k = 0; k< number_of_factors; k++){
    if (k < number_of_factors){
      if (flist[k] == flist[k+1]){
        ans *= flist[k];
      }
      else ans*= (flist[k] - 1);
    }
    else ans *= (flist[k] - 1);
  }
  return ans ;
}
*/

long totient( long n , const long* primes){
  if (n<= 0) return 0;
  

  long ans = n;

  for (long index =0 ; primes[index]<= n; index++ ){
    if (n % primes[index] ==0){
      ans /= primes[index];
      ans *= primes[index] - 1;
    }
  }
  return ans;
}
