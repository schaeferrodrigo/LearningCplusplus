#include "segpoin.h"

Segment Point::operator+(const Point& that)const{
  return Segment(*this, that);
}
