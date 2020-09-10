#include "a_b_list.h"



void a_b_list(long long limit , long long* values_a, long long* values_b){
  values_a[0] = 1;
  values_b[0] = 1;
  for( long long index = 1; index <= limit ; index++){
    values_a[index] = values_b[index - 1];
    values_b[index] = values_a[index-1] + 2*values_b[index-1];
  }
}
