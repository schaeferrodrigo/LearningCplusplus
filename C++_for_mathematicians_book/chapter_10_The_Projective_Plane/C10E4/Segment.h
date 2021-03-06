#ifndef SEGMENT_H
#define SEGMENT_H

#include "Point.h"
#include <iostream>
#include <utility>

using namespace std;

class Point;

class Segment{

private:

  pair<double,double> p_i;
  pair<double,double> p_f;

public:
  Segment(){ p_i = p_f = make_pair(0.,0.);}
  Segment(Point p_1 , Point p_2){
    p_i  = make_pair(p_1.get_x(),p_1.get_y());
    p_f = make_pair(p_2.get_x(), p_2.get_y());
  }
  Segment(double a,double b , double c, double d){
    p_i = make_pair(a,b);
    p_f = make_pair(c,d);
  }

  Point get_init()const;

  Point get_fin()const;

  Point midpoint()const;

};

ostream& operator<<(ostream& os, const Segment& S);

#endif
