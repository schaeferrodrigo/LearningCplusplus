#ifndef Line_H
#define Line_H

#include "../Point.h"
#include <iostream>

using namespace std;


/* 
Class that define a line on the plane that is defined by the equation

ax + by +c = 0
*/

class Line {
  
  private:
    double a;
    double b;
    double c;

  public:
    Line();
    Line(Point P , Point Q);
    Line( double aa , double bb, double cc);
    
    double getA() const;
    double getB() const;
    double getC() const;

    void reflectX() ;
    void reflectY() ;
    
    bool InLine( Point P);
    
    Point generatePoint();
    
    bool operator==(const Line& r) const;
 };


ostream& operator<<(ostream& os , const Line r);
double distance(Point Q , Line r);
double distance(Line r , Point Q);
int  testIntersection( Line r , Line s , Point& IntersPoint);


#endif
