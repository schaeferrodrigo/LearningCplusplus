#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

class Square : public Rectangle{

public:
  Square(double size): Rectangle(size,size){}

  double get_length()const{
    return get_width();
  }

  void set_length( double size){
    set_width(size);
    set_height(size);
  }
};

inline ostream& operator<<(ostream& os, const Square& S){
  os << "Lenght of size = "<< S.get_length()<<endl;
  return os;
}

#endif
