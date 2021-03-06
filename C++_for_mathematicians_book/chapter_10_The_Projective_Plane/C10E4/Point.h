#ifndef POINT_H
#define POINT_H

#include "Segment.h"
#include <iostream>

using namespace std;

class Segment;

class Point{
private:
  double x , y;
public:
  Point(){ x = y = 0;}
  Point(double a , double b){
    x = a;
    y= b;
  }

  double get_x()const{return x;}

  double get_y()const{return y;}

  Segment operator+( const Point& that)const;

};

inline ostream& operator<<(ostream& os , const Point& P){
  os << "("<< P.get_x()<<","<<P.get_y() <<")";
  return os;
}

#endif
