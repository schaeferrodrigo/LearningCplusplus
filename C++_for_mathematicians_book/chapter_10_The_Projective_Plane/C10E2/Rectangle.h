#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Parallelogram.h"

class Rectangle : public Parallelogram{

public :
  Rectangle(double x, double z): Parallelogram(x, 0, z){}

  double get_base()const{
    return get_a();
  }
  double get_height()const{
    return get_c();
  }

  double perimeter()const{
    return 2*(get_a()+get_c());
  }
};


inline ostream& operator<<(ostream& os , const Rectangle& R){
  os << "Rectangle of base = "<<R.get_base()<< " and height = "<<
        R.get_height()<<endl;
  return os;
}
#endif
