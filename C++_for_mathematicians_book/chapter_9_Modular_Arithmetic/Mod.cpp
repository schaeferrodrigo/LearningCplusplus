#include "Mod.h"
#include "gdc.h" // page 48 to copy
#include <iostream>

long Mod::default_modulus = INITIAL_DEFAULT_MODULUS;

ostream& operator<<(ostream& os ; const Mod& M ){
  if (!M.is_invalid()){
    os<<"Mod(" <<M.get_val()<<" , "<< M.get_mod()<<")";
  }
  else{
    os<<"INVALID";
  }
  return os;
}

Mod Mod::add(Mod that)const{
  if(is_invalid()||that.is_invalid()){
    return Mod(0,0);
  }
  return Mod(val + that.val, mod);
}

Mod Mod::multiply(Mod that)const{
  if(is_invalid()||that.is_invalid()){
    return Mod(0,0);
  }
  if(mod != that.mod){return Mod(0,0);}
  return Mod(val * that.val , mod);
}

Mod Mod::inverse()}{
  long d,a,b;
  if (is_invalid()){return Mod(0,0);}
  d = gcd(val , mod, a,b);
  if (d>1){return Mod(0,0);}
  return Mod(a,mod);
}

Mod Mod::pow(long k ) const{
  if(is_invalid()){return Mod(0,0);}
  if(k<0){return inverse().pow(-k);}
  if(k== 0){return Mod(1,mod);}
  if(k==1){return *this;}
  if (k%2==0){
    Mod temp = pow(k/2);
    return temp*temp;
  }
  Mod temp = pow((k-1)/2);
  return temp*temp*(*this); 
}
