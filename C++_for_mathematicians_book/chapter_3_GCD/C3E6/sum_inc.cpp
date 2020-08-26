/*
* function to calculate the sum of 1/k^2, for k in (1,N)
*/

#include "SUM.h"
#include <cmath>

float sum_inc(long N){
  float sum =0;
  for(long k=1; k <=N ; k++){
    sum += 1./pow(k,2);
    }
  return sum;
}
