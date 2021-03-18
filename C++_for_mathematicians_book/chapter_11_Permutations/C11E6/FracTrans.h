#ifndef  FRACTRANSF_H
#define FRACTRANSF_H

#include <iostream>
#include <complex>

using namespace std;

typedef complex<double> C;

class FracTrans{
private:
  C a, b,c,d;

public:
  FracTrans(){
    a = 1;
    b = c= 0;
    d  = 1;
  }
  FracTrans(double a_1, double a_2, double b_1, double b_2, double c_1,
             double c_2, double d_1 , double d_2){
            a = C(a_1,a_2);
            b = C(b_1, b_2);
            c = C(c_1,c_2);
            d = C(d_1, d_2);
            if(a*d - c*d ==C(0.,0.)){cerr<< "Error! a*d - b*c = 0!"<<endl;}
            FracTrans();
             }
  FracTrans(C aa , C bb , C cc, C dd){
    a = aa;
    b = bb;
    c = cc;
    d = dd;
    if(a*d - c*d ==C(0.,0.)){cerr<< "Error! a*d - b*c = 0!"<<endl;}
    FracTrans();
  }

  C operator()(C z){ return (a*z + b)/(c*z + d);}

  FracTrans operator*(const FracTrans that){
    C aa = a*that.a  + b*that.c;
    C bb = a * that.b + b * that.d;
    C cc = c * that.a  + d * that.c;
    C dd = c * that.b + d*that.d;
    if(aa*dd-cc*bb ==C(0.,0.)){
      cerr<<"Error! This composition is not well defined!"<<endl;
      return FracTrans();
    }
   return FracTrans(aa ,bb, cc, dd);
  }

  C get_a()const{return a;}
  C get_b()const{return b;}
  C get_c()const{return c;}
  C get_d()const{return d;}

};

ostream& operator<<(ostream& os, const FracTrans& T){
  if(T.get_a()!=C(0.,0.)){os<<T.get_a()<<"z";}
  if(T.get_b()!=C(0.,0.)){os<<"+ "<< T.get_b();}
  os<<endl;

  os<<"------"<<endl;

  if(T.get_c()!=C(0.,0.)){os<<T.get_c()<<"z";}
  if(T.get_d()!=C(0.,0.)){os<<"+ "<< T.get_d()<<endl;}

  return os;
}

#endif
