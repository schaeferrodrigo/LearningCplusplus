#ifndef Interval_H
#define Interval_H

#include <iostream>

using namespace std;

class Interval{

   private:
     
     double a;
     double b;

  public:
    
    Interval(){
      a = 0;
      b = 1;  
    }
    Interval( double aa , double bb){
      if (aa >bb){
        a = bb;
        b = aa;
      } else {
        a = aa;
        b = bb;
      }
    }
    
    double getA() const{
      return a;
    }
    double getB() const{
      return b;
    }
    
    bool operator==(const Interval& that) const {
      return  ((a ==that.a) && (b==that.b));
    }
    
    bool operator!=(const Interval& that) const{
      return !(*this == that);
    }

   bool operator<(const Interval& that) const{
     if (a < that.a) {return true;}
     if ((a == that.a)&& (b< that.b)  ){return true;}
     
     return false;
   } 
 };

inline ostream& operator<<(ostream& os , const Interval& I){
  os << "["<<I.getA()<<","<<I.getB()<<"]";
  return os;
  }



#endif
