/*
*  FUNCTION TO CALCULATE THE NTH TERM OF FIBONACCI SERIES USING recursion
*/
#include "FIBONACCI.h"

long fibonacci_rec(long n){
  if ((n ==0) || (n==1)){
    return 1;
  }
  else{
    return fibonacci_rec(n-1) + fibonacci_rec(n-2);
    }
}
