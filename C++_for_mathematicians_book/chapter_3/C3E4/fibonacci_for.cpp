/*
*  FUNCTION TO CALCULATE THE NTH TERM OF FIBONACCI SERIES USING FOR
*/
#include "FIBONACCI.h"

long fibonacci_for( long n){
  if ((n ==0) || (n==1)){
    return 1;
  }
  else{
    long new_term;
    long penultim = 1;
    long last = 1;
    for (long i =2; i<= n; i++){
      new_term = penultim + last;
      penultim = last;
      last = new_term;
    }
    return new_term;
  }
}
