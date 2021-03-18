#include "FracTrans.h"



int main(){
  C a = C(2.,3.);
  C b = C(1.,0.5);
  C c = C(1.,0);
  C d = C(0., -0.2);
  FracTrans T(a,b,c,d);

  cout<< T<<endl;
  C dd = C(0.,0.);
  FracTrans S(a,b,c,dd);

  FracTrans Q = T*S;
  cout << Q<<endl;
  C z = C(1.,0.);
  cout<<Q(z)<<endl;

  return 0;
}
