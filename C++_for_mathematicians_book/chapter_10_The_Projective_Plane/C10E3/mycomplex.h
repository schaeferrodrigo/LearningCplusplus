#ifndef MYCOMPLEX_H
#define MYCOMPLEX_H

#include <complex>
#include <iostream>

using namespace std;

class MyComplex : public complex<double> {

public:
  MyComplex(): complex<double>(){}
  MyComplex(double re):complex<double>(re , 0.){}
  MyComplex(double re , double im):complex<double>(re,im){}

  bool operator<( const MyComplex& that)const{
    if(real()>that.real()){return false;}
    if(real() == that.real()){
      if(imag()>= that.imag()){
        return false;
      }
    }
    return true;
  }
};

#endif
