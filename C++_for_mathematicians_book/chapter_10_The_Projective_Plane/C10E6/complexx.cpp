#include "complexx.h"

complexx complexx::operator+(const complexx& that)const{
  if(is_infinity()){
    if(that.is_infinity()){
      cout<< "undefined value!";
      return complexx();
    }else{return complexx(0,0,true);}
  }
  if(is_infinity()||that.is_infinity()){
    return complexx(0,0,true);
  }
  double re, im;
  complex<double> z;
  z = get_finite()+that.get_finite();
  return complexx(z);
}

complexx complexx::operator-()const{
  if(is_infinity()){return complexx(0,0,true);}

  complex<double> z = -get_finite();
  return complexx(z);
}

complexx complexx::operator-(const complexx& that)const{
  return (*this+ (-that));
}

complexx complexx::operator*(const complexx& that)const{
  if((that.get_finite() == complex<double>(0.,0.))&& is_infinity()){
    return complexx(0,0);}
  if((get_finite() == complex<double>(0.,0.))&& that.is_infinity()){
      return complexx(0,0);}

  if((!is_infinity())&&(!that.is_infinity())){
    complex<double> z = get_finite()*that.get_finite();
    return complexx(z);
  }
  return complexx(0,0,true);}

complexx complexx::operator/(const complexx& that)const{
  if ((get_finite()!=complex<double>(0,0))&&(that.get_finite()==complex<double>(0,0))){
    return complexx(0,0,true);
  }
  if ((!is_infinity())&&(that.is_infinity())){
    return complexx(0,0);
  }

 if((get_finite()==complex<double>(0,0))&&(that.get_finite()==complex<double>(0,0))){
   cout << "undefined value!"<<endl;
   return complexx(0,0);
 }

 if((is_infinity())&&(that.is_infinity())){
   cout << "undefined value!"<<endl;
   return complexx(0,0);
 }

 return complexx(get_finite()/that.get_finite());
}

bool complexx::operator==(const complexx& that)const{
  if(is_infinity()&&that.is_infinity()){return true;}
  if( !is_infinity()&& !that.is_infinity()){
    if (get_finite()==that.get_finite()){return true;}
  }
  return false;
}

ostream& operator<<(ostream& os, const complexx& z){
  if(z.is_infinity()){
    os<< "Infinity";
  }
  else{ os << z.get_finite(); }
  return os;
}
