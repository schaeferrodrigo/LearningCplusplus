#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include <iostream>
#include <cmath>

using namespace std;

class Parallelogram{

private:
  double a , b, c;

public:

  Parallelogram(){
    a = 1;
    b = 1;
    c = 0;
  }
  Parallelogram(double x, double y , double z ){
    if(x <0){
      cout<< "Warning!! a cannot be negative, the absolute value was taken"<<endl;
      x = -x;
             }
    if(z < 0){
      cout << "Warning!! c cannot be negative, the absolute value was taken"<<endl;
      z = -z;
    }
    a = x;
    b = y;
    c = z;
  }

  double get_a()const{return a;}

  double get_b()const{return b;}

  double get_c()const{return c;}

  double area(){
    return a*c;
  }

  double perimeter(){
    double h = sqrt(b*b + c*c);
    return 2*(h  + a);
  }

};

inline ostream& operator<<(ostream& os , const Parallelogram& P ){
  os << "The parallelogram is defined by (a = "<<P.get_a()<<", 0) and (b ="<<
         P.get_b()<<", c= "<<P.get_c() <<")"<<endl;
  return os;
}

#endif
