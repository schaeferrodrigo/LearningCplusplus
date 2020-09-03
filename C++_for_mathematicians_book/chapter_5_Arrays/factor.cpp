#include "factor.h"


long factor(long n , long* flist){
  if (n == 0.) return -1;
  if (n==1) return 0.;
  if( n< 0.){ n = -n;}

  int index = 0;
  int current_divisor = 2;
  
  while (n > 1){
    while ( n% current_divisor ==0){
      flist[index] = current_divisor;
      index++;
       n = n/current_divisor;
    }
    current_divisor += 1;
  }
 
  return index;
 }
