#include "Point.h"
#include <cmath>


Point::Point(){
   x = 0.;
   y = 0.;
}

Point::Point( double xx, double yy){
  x = xx;
  y = yy;
}

double Point::getX() const {
  return x;
}

double Point::getY() const {
  return y;
}

void Point::setX( double xx){
  x = xx;
}

void Point::setY( double yy){
  y = yy;
}

double Point::getR() const {
  return sqrt( x*x + y*y);
}

double Point::getA() const {
  if ((x == 0)&&(y ==0)){ return 0.;}

  double A = atan2(y,x);
  if (A <0) {A = A + 2*M_PI ;}
  
  return A;
}


void Point::setR( double r){

  if ((x==0) && (y == 0)){
    x = r;
  }
  else { 
    double A = getA();
    x = r * cos( A );
    y = r * sin( A );
  }
}

void Point::setA( double theta){
  double r = getR();
  x = r* cos( theta );
  y = r * sin( theta );
}

void Point::rotate( double theta ){
  double A = getA();
  A += theta;
  setA(A);
}

bool Point::operator==( const Point& Q ) const {
  return ((x ==Q.x) && (y == Q.y));
}


bool Point::operator!=( const Point& Q ) const {
  return !(*this == Q);
}

Point Point::translate( double dx , double dy){
   double x_1 = getX() + dx;
   double y_1 = getY() + dy;
   return Point( x_1 , y_1); 
}

double dist( Point P , Point Q){
  double dx = P.getX() - Q.getX();
  double dy = P.getY()- Q.getY();
  return sqrt( dx*dx + dy*dy );
}

Point midpoint( Point P , Point Q ){
  double xx = (P.getX() + Q.getX())/2. ;
  double yy = (P.getY() + Q.getY())/2. ;
  return Point( xx , yy);
}

ostream& operator<<(ostream& os , const Point P){
  os<<"("<<P.getX()<<"," << P.getY()<<")";
  return os;
}





