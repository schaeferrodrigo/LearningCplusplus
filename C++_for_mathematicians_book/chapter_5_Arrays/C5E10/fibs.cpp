#include "fibs.h"


long fibs(long n){

  if ((n<0) || (n>40)){return -1;}

  static char first_call = 'Y';  
  static long fibonacci_sequence[41];
 
  
  if(first_call  == 'Y'){
    fibonacci_sequence[0] = 1;
    fibonacci_sequence[1] = 1;
    for(int index = 2; index <=40 ; index++){
      fibonacci_sequence[index] = fibonacci_sequence[index - 1] + fibonacci_sequence[index - 2];
    }
    first_call = 'N';
  }
  
  
  return fibonacci_sequence[n];
}
