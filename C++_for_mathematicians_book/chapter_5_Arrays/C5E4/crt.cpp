#include "crt.h"
#include "gcd.h"
#include <cmath>
#include <iostream>

using namespace std;

long crt( long a_1 , long n_1 , long a_2 , long n_2 , long& mod){
  
  long gCommonDivisor = gcd(n_1 , n_2);

  if (gCommonDivisor != 1){
    n_1 = n_1/gCommonDivisor ;
    n_2 = n_2 /gCommonDivisor ;
    a_1 = a_1% gCommonDivisor;
    a_2 = a_2%gCommonDivisor; 
  }
   
  long a1_n2 , n1_n2 , solution , candidate;
  long k = 0;
  a1_n2 = a_1%n_2;
  n1_n2 = n_1 % n_2;
  mod = n_1*n_2;

  do{
    candidate = ((a_2 - a1_n2)% n_2 + k * n_2);
    k++;
  } while( candidate % n1_n2 != 0);
  solution = (n_1 *(candidate/n1_n2) + a_1) % (n_1 * n_2);
  
  return solution; 
}
