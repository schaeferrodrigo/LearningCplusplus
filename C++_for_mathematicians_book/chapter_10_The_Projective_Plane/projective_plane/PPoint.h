#ifndef POINT_H
#define POINT_H

#include "PObject.h"

class PLine;

class PPoint : public PObject{

public:
  PPoint( double a = 0. , double b = 0. , double c =1.) :
  PObject(a,b,c)
  {}

  PPoint( const PObject& that):
  PObject(that.getX() , that.getY(), that.getZ())
  {}

  bool operator==(const PPoint& that )const{
    return equals(that);
  }

  bool operator!=(const PPoint& that)const{
    return !equals(that);
  }

  bool operator<(const PPoint& that )const{
    return less(that);
  }

  PLine operator+(const PPoint& that) const;

  bool is_on(const PLine& that) const;

  PLine rand_line()const;
};

ostream& operator<<(ostream& os , PPoint& P);

inline bool coolinear(const PPoint& A, const PPoint& B, const PPoint& C){
  return dependent(A,B,C);
}

#endif
