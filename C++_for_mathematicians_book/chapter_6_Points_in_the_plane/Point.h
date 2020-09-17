#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

/*
Declaration af a class called Points

*/

class Point {

private:
  double x;
  double y;

public:
  Point(); // "abstract" constructor
  Point( double xx , double yy); // Concrete constructor
  double getX() const;
  double getY() const;
  void setX( double xx ) ;
  void setY( double yy ) ;
  double getR() const ;
  double getA() const ;
  void setR( double r ) ;
  void setA( double theta ); 
  void rotate( double theta ) ;
  bool operator==( const Point& Q ) const ;
  bool operator!=( const Point& Q ) const ;
  Point translate( double dx , double dy);
 } ;

double dist( Point P , Point Q);
Point midpoint( Point P , Point Q );
ostream& operator<<(ostream& os , const Point P);


#endif
