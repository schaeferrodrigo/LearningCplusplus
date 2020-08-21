/*
* function to calculate the sum of 1/k^2, for k in (1,N)
*/

#include "SUM.h"
#include <cmath>

float sum_dec(long N){
  float sum =0;
  for(int k=N; k >=1 ; k--){
    sum += 1./pow(float(k),2);
    }
  return sum;
}
