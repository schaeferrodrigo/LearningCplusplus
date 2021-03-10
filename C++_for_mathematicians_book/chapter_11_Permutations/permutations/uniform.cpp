#include "uniform.h"
#include <cstdlib>
#include <cmath>
#include <ctime>


using namespace std;

double unif(){
  return rand() / double(RAND_MAX);
}

double unif( double a, double b){
  return (b-a)*unif() + a;
}

long unif( long n){
  if (n<0) n = -n;
  if (n==0) return 0;
  return long(n*unif()) +1;
}

void seed(){
  srand(time(0));
}
