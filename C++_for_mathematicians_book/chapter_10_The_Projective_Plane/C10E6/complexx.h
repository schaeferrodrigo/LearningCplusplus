#ifndef COMPLEXX_H
#define COMPLEXX_H

#include <iostream>
#include <complex>

using namespace std;

class complexx : public complex<double>{

private:
  bool infinity;

public:
  complexx() : complex<double>(){ infinity = false;}
  complexx(double re, double im = 0. , bool inf  =false):
    complex<double>(re ,im){
      infinity = inf;
    }
  complexx(complex<double>z , bool inf = false):
  complex<double>(z.real(), z.imag())
  {infinity = inf;}


  complex<double> get_finite()const{
    return complex<double>(real(),imag());
  }


  bool is_infinity()const{
    return  infinity==true;
  }

  complexx operator+(const complexx& that)const;
  complexx operator-()const;
  complexx operator-(const complexx& that)const;
  complexx operator*(const complexx& that)const;
  complexx operator/(const complexx& that)const;

  bool operator==(const complexx& that)const;
  bool operator!=(const complexx& that)const{
    return !(*this == that);
  }

};

ostream& operator<<(ostream& os, const complexx& z);

#endif
