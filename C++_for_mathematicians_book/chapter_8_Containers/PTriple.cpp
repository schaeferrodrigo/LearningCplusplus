#include "PTriple.h"
#include "gcd.h"
#include <iostream>

using namespace std;


PTriple::PTriple( long m , long n){
  a = m*m - n*n;
  b = 2*m*n;
  c = m*m + n*n;

  reduce();
}

void PTriple::reduce(){
  if ((a==0)&&(b==0)&(c==0)) return ;
  
  if (a<0) a = -a;
  if (b<0) b = -b;

  if (a>b){
    long temp = a;
    a = b;
    b = temp;
  }
  
  long d = gcd( a, b);
  a /= d;
  b /= d;
  c /= d;
 }

bool PTriple::operator<( const PTriple& that) const{
  if (c < that.c){return true;}

  if (c > that.c){return false;}

  if (b< that.b){return true;}

  return false; 
}

ostream& operator<<(ostream& os , const PTriple& PT){
  os << "("<< PT.getA()<<","<<PT.getB()<<","<<PT.getC()<<")"<<endl;
  return os;
}

