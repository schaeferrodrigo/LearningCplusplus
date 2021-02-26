#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle{

private:
  double height;
  double width;

public:

  Rectangle( double a , double b){
    height = a;
    width = b;
  }

  double get_height()const{
    return height;
  }

  double get_width()const{
    return width;
  }

  void set_height(double new_height){
    height = new_height;
  }
  void set_width(double new_width){
    width = new_width;
  }

  double area() const{
    return width * height;
  }

  double perimeter()const{
    return 2*width + 2*height;
  }
};

inline ostream& operator<<(ostream& os , Rectangle R){
  os<< " Width = "<<R.get_width()<< " and height = "<<R.get_height()<<endl;
  return os;
}

#endif
