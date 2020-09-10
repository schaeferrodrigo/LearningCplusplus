#include "fibonacci.h"



void fibonacci_numbers(long last , long* fibonacci_list){
  fibonacci_list[0] = 1;
  fibonacci_list[1] = 1;
  for( long index =2 ; index <= last ; index++){
    fibonacci_list[index] = fibonacci_list[index -1] + fibonacci_list[index - 2];
  }
}
