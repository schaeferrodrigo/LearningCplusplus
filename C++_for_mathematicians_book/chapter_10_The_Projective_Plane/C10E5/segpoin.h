#ifndef SEGPOIN_H
#define SEGPOIN_H

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

class Segment{

private:

  Point p_i;
  Point p_f;

public:
  Segment(){ p_i = p_f = Point(0.,0.);}
  Segment(Point p_1 , Point p_2){
    p_i  = p_1;
    p_f = p_2;
  }
  Segment(double a,double b , double c, double d){
    p_i = Point(a,b);
    p_f = Point(c,d);
  }

  Point get_init()const{return p_i;};

  Point get_fin()const{return p_f;};

  Point midpoint()const{
    double x_m, y_m;
    x_m = (p_f.get_x() + p_i.get_x())/2;
    y_m = (p_i.get_y() + p_f.get_y())/2;

    return Point(x_m,y_m);
  }

};

inline ostream& operator<<(ostream& os , const Point& P){
  os << "("<< P.get_x()<<","<<P.get_y() <<")";
  return os;
}

inline ostream& operator<<(ostream& os, const Segment& S){
  os<<"Segment defined by "<<S.get_init()<< " and "<< S.get_fin();
  return os;
}

#endif
