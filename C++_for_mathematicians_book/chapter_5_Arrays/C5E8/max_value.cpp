#include "max_value.h"
	

long max_value( long number_elements , const long* list){
  
  long max_candidate;

  max_candidate = list[0];

  for(long index = 1; index < number_elements ; index++ ){
    if (max_candidate <= list[index]){
      max_candidate = list[index];
    }
  }
  return max_candidate;
}
