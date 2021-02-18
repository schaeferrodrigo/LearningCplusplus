#include "quartenions.h"
#include <iostream>


using namespace std;


Quartenions Quartenions::operator+(const Quartenions& that)const{
   Quartenions sum;
   sum.i_axis = i_axis + that.i_axis;
   sum.j_axis = j_axis + that.j_axis;
   sum.k_axis = k_axis + that.k_axis;
   sum._axis =  _axis + that._axis;
   return sum;
   }

Quartenions Quartenions::operator*(const double k)const{
   Quartenions scalar_mult;
   scalar_mult = Quartenions( k*_axis , k * i_axis , k * j_axis, k * k_axis );
   return scalar_mult;
}

Quartenions Quartenions::operator-()const{
   return *this*(-1);
}

Quartenions Quartenions::operator-(const Quartenions& that)const{
   return (*this+(-that));
}

Quartenions Quartenions::operator/(const double k)const{
   if(k==0){
      cout << "Invalid valor - scalar value equal to 0"<<endl;
      return Quartenions();
   }
   return (*this*(1/k));
   }

Quartenions Quartenions::operator+=(const Quartenions& that ){
   Quartenions temporary = *this + that;
   *this = temporary;
   return *this;
}

Quartenions Quartenions::operator-=(const Quartenions& that){
   Quartenions temporary = *this - that;
   *this = temporary;
   return temporary;
}

Quartenions Quartenions::operator*=(const double k){
   Quartenions temporary = (*this) * k;
   *this = temporary;
   return *this;
}

Quartenions Quartenions::operator/=(const double k){
   Quartenions temporary = *this /k;
   *this = temporary;
   return *this;
}

Quartenions edge_product(const Quartenions& u , const Quartenions& v){
   double a,b,c,d;
   a = u.get_()*v.get_() - u.get_i() * v.get_i() - u.get_j()*v.get_j() - u.get_k()*v.get_k();
   b = u.get_()*v.get_i() + u.get_i() * v.get_() + u.get_j()*v.get_k() - u.get_k()*v.get_j();
   c = u.get_()*v.get_j() -u.get_i() * v.get_k() +u.get_j()*v.get_() + u.get_k() * v.get_i();
   d = u.get_() * v.get_k()+ u.get_i() * v.get_j() -u.get_j() * v.get_i() + u.get_k() * v.get_();
   return Quartenions(a,b,c,d);
}

ostream& operator<<(ostream& os ,  const Quartenions& vec){
   os<< vec.get_() <<" + "<<vec.get_i()<<" i + "<< vec.get_j()<<"j + "<<vec.get_k()<<"k "<<endl;
   return os;
}
