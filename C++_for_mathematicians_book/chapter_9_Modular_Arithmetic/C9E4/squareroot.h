#ifndef SQUAREROOT_H
#define SQUAREROOT_H

#include <cmath>
#include <iostream>

using namespace std;


class SquareRoot{

private:
  long integer;

public:

  SquareRoot(){
    integer = 0;
    }

  SquareRoot(long n){
    if( n < 0){
      cout << "INVALID VALUE";
      SquareRoot();
    }
    else{
      integer = n;
      }
  }

  long get_integer()const{return integer;}

  SquareRoot operator*(const SquareRoot that) const{
    SquareRoot hyp;
    //hyp( get_integer() + that.get_integer());
    hyp = SquareRoot( get_integer() + that.get_integer() );
    return hyp;
  }

  double dec_SquareRoot(){
    double square = sqrt(get_integer());
    return square;
  }
};

inline ostream& operator<<(ostream& os ,  const SquareRoot& element){
  os <<" square root of "<< element.get_integer()<< endl;
  return os;
};

#endif
