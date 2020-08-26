/*
* Functions to change variables from cartesian coordinates to polar coordinates
and from polar coordinates to cartesian cordinates
*/
#include "CHANGE.h"
#include <cmath>

void xy2polar( double x , double y, double& r , double& t){
  r = hypot(x , y);
  t = atan2(y,x);
  float pi = M_PI;
  if (t<0){
    t = 2*pi + t;
  }
}

void polar2xy(double r , double t , double& x , double& y){
  x = r*cos(t);
  y = r*sin(t);
}
