#include "Segment.h"
#include "Point.h"


Segment Point::operator+(const Point& that)const{
  return Segment(*this, that);
}

Point Segment::get_init()const{
    return Point(p_i.first,p_i.second);
}

Point Segment::get_fin()const{
  return Point(p_f.first, p_f.second);
}

Point Segment::midpoint()const{
  double x_m, y_m;
  x_m = (p_f.first + p_i.first)/2;
  y_m = (p_i.second + p_f.second)/2;

  return Point(x_m,y_m);
}

ostream& operator<<(ostream& os, const Segment& S){
  os<<"Segment defined by"<<S.get_init()<< "and "<< S.get_fin();
  return os;
}
