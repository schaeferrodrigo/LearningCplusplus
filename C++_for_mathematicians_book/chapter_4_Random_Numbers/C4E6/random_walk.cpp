#include "../examples/uniform.h"
#include <iostream>
#include <cmath>

using namespace std;


long random_walk(long initial_position){
  long step;
  step = unif(2);
  if(step ==2){ return initial_position +1;}
  else{ return initial_position -1;} 
}

int main(){
  long initial_position , number_of_steps , next_step;
  seed();
  number_of_steps = 20;
  initial_position = 0;   
  for(long i = 0; i <= number_of_steps ; i++){
  next_step = random_walk(initial_position);
  cout << next_step<<"\n";
  initial_position = next_step;  
  }
  return 0;
}
