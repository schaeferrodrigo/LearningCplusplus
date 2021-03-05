#ifndef RHOMBUS_H
#define RHOMBUS_H
#include "Parallelogram.h"


class Rhombus : public Parallelogram{

public:
  Rhombus(double y, double z): Parallelogram( sqrt(y*y + z*z), y , z){}
};

inline ostream& operator<<(ostream& os , const Rhombus& R){
  os << " Rhombus with lenght of side = "<< R.get_a()<<endl;
  return os;
}

#endif
