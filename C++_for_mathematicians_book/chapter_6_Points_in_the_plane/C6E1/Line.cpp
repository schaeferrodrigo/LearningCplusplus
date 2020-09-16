#include "Line.h"
#include "../Point.h"
#include <iostream>
#include <cmath>

using namespace std;



Line::Line(){
  c = 0.;
  a = 1.;
  b = 0.;
}

Line::Line(Point P , Point Q){
  if (P ==Q){ 
    cout << "Points are equal" ;
    c = 0.;
    b = 0.;
    a = 1.;
  }
  else {
    double x_1 = P.getX();
    double y_1 = P.getY();
    double x_2 = Q.getX();
    double y_2 = Q.getY();
    
    a  = y_1 - y_2;
    b = x_2 - x_1 ;
    c = x_1 * y_2 - y_1 *x_2;
   }
}

Line::Line(double aa, double bb , double cc){
  if( (aa == 0)&&(bb == 0 )){
    cout << "a = 0 and b= 0! This is NOT a line" <<endl;
    a = 1.;
    b = 0.;
    c = 0. ;
   }
  else{
    a = aa;
    b = bb;
    c = cc;
  }
}

double Line::getA() const {
  return a;
}

double Line::getB() const {
  return b;
}

double Line::getC() const{
  return c;
}

void Line::reflectX(){
  a = -getA();
  c = -getC();
}

void Line::reflectY(){
  b = -getB();
  c = -getC();
}

bool Line::InLine(Point P){
  double p_1 = P.getX();
  double p_2 = P.getY();
  return (getA()*p_1 + getB()*p_2 + getC()==0. );
}

Point Line::generatePoint(){
  if (getB() ==0){
    return Point(-getC()/getA() , 1.);
  }
  else{
    return Point( 0, -getC()/getB());
  }
}

bool Line::operator==(const Line& r) const {
  double tol = 1e-6;
  if ((b!= 0.) && (a != 0)){
    if (c  != 0){
      return (( r.getA()/a - r.getB()/b < tol) && (r.getA()/a  - r.getC()/c < tol));
    }
    else{
      return ( r.getA()/a - r.getB()/b < tol) ;
    }
  }
   
  double expression_1 , expression_2;
  if (b == 0){
    expression_1 = r.getA()/a ;
    expression_2 = r.getB() ;
  }
  else{
    expression_1 = r.getB()/b ; 
    expression_2 = r.getA() ;
   }
   
  if (c != 0.){
      return ((expression_1 - r.getC()/c <tol) && (expression_2==0));
    }
    else {
      return ((r.getC()==0) && (expression_2==0)); 
    }
}  


ostream& operator<<(ostream& os , const Line r){
  os<<r.getA()<< "x + "<< r.getB() <<"y + "<< r.getC() <<" = 0 "<<endl;
  return os;
}

double distance(Point Q , Line r){
  if (r.getB() ==0){
   return sqrt((Q.getX() + r.getC()/r.getA()) * (Q.getX() + r.getC()/r.getA()) );
  }
  else if (r.getA() == 0){
    return sqrt((Q.getY() + r.getC()/r.getB()) * (Q.getY() + r.getC()/r.getB()) );
  }
  else{
    double cos_theta = (Q.getX() + r.getC()/r.getA() - r.getA() * Q.getY()/r.getB())/(sqrt(1 + r.getA()*r.getA()/(r.getB()*r.getB())) * sqrt(Q.getY()*Q.getY() + (Q.getX() + r.getC()/r.getA()) * (Q.getX() + r.getC()/r.getA()) ));
    double h = sqrt( Q.getY()*Q.getY() + (Q.getX() + (r.getC()/r.getA()) )*( Q.getX() + (r.getC()/r.getA()) ) );
    return h * sqrt(1 - cos_theta * cos_theta); 
  }
}

double distance( Line r , Point Q ){
  return distance( Q , r);
}


int  testIntersection( Line r , Line s , Point& IntersPoint){
  double a_1 , a_2 , b_1, b_2 , c_1 , c_2 , determinant;
  a_1 = r.getA();
  b_1 = r.getB();
  c_1 = r.getC();
  a_2 = s.getA();
  b_2 = s.getB();
  c_2 = s.getC();
  
  determinant = a_1 * b_2 - a_2 * b_1;
  if (determinant != 0.) {
    double x = (-b_2* c_1 + b_1 * c_2)/determinant;
    double y = (c_1 * a_2 - c_2 * a_1) / determinant;
    IntersPoint = Point(x , y);
    cout << "only one intersection point" << endl;
    return 1;
  }
  else{
    if (r == s){
      IntersPoint = r.generatePoint();
      cout << " infinite intersection points" << endl;
      return 1;
    }
    else {
      cout << " there is no intersection points" << endl;
      return 0;
    }
  }
}





