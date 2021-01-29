#include "crt.h"
#include "../gcd.h"
#include "../Mod.h"
#include <cmath>
#include <iostream>

using namespace std;

Mod crt(const Mod a , const Mod b){
  Mod a_1 = a;
  Mod b_1 = b;

  long m,n ,x,y;
  m = a_1.get_mod();
  n = b_1.get_mod();
  long gCommonDivisor = gcd(m , n,x,y);
  if (gCommonDivisor!= 1){
    m = m/gCommonDivisor ;
    n = n /gCommonDivisor ;
    a_1 = Mod(a_1.get_val() , m );
    b_1 = Mod(b_1.get_val() , n);
  }

  a_1 = Mod(n*a_1.get_val(),m*n);
  b_1= Mod(m*b_1.get_val() , m*n);
  Mod solution;
  solution = (a_1-b_1)/(n-m);
  return solution;
}
