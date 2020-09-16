#include "SegmentLine.h"
#include "../Point.h"
#include <iostream>

using namespace std;


SegmentLine::SegmentLine(){
  P = Point(0 , 0);
  Q = Point(1 , 0);
}

SegmentLine::SegmentLine(Point PP , Point QQ){
  P = PP;
  Q = QQ;
}

Point SegmentLine::getP() const{
  return P;
}

Point SegmentLine::getQ() const{
  return Q;
}

void SegmentLine::setP(Point PP){
  P = PP;
}

void SegmentLine::setQ(Point QQ){
  Q = QQ;  
}

double SegmentLine::length(){
  return dist(getP() , getQ());
}

Point SegmentLine::mid_point(){
  return midpoint(getP() , getQ());
}

bool SegmentLine::operator==( const SegmentLine& r) const{
   return( ((P==r.getP())&& (Q==r.getQ())) ||((P==r.getQ())&&(Q==r.getP())));
}

ostream& operator<<(ostream& os , const SegmentLine r){
  os<<"["<<r.getP()<<","<<r.getQ()<<"]"<<endl;
  return os;
}
