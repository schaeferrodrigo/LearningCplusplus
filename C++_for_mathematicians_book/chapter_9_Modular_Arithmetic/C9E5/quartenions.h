#ifndef QUARTENIONS_H
#define QUARTENIONS_H

#include <iostream>
#include <vector>

using namespace std;

class Quartenions{

private:
  double i_axis;
  double j_axis;
  double k_axis;
  double _axis;


public:
  Quartenions(){
    i_axis = 0.;
    j_axis = 0.;
    k_axis = 0.;
    _axis = 0.;
  }

 Quartenions(double a, double b, double c, double d){
   i_axis = b;
   j_axis = c;
   k_axis = d;
   _axis = a;
 }

 double get_i()const{return i_axis;}

 double get_j()const{return j_axis;}

 double get_k()const{return k_axis;}

 double get_()const{return _axis;}

 Quartenions operator+(const Quartenions& that)const;

 Quartenions operator-()const;

 Quartenions operator-(const Quartenions& that)const;

 Quartenions operator*(const double k)const;

 Quartenions operator/(const double k)const;

 Quartenions operator+=(const Quartenions& that );

 Quartenions operator-=(const Quartenions& that);

 Quartenions operator*=(const double k);

 Quartenions operator/=(const double k);
};

ostream& operator<<(ostream& os , const Quartenions& vec);

inline Quartenions operator*(const double k , const Quartenions v){
  return v * k;
}

 Quartenions edge_product(const Quartenions& u , const Quartenions& v);


#endif
