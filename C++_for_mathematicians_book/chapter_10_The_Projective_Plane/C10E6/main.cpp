#include "complexx.h"

int main(){
  complexx a,b,c;

  a = complexx( 1.,2.);
  b = complexx(0,0,1);
  c = complexx(2.5);

  cout <<"a= "<<a<<endl;
  cout <<"b = "<<b<<endl;
  cout<<"c ="<<c <<endl;

  cout<< "a+b = "<< a+b<<endl;
  cout<< "a+c = "<< a+c<<endl;
  cout<< "a-b = "<< a-b<<endl;
  cout<< "a-c = "<< a-c<<endl;
  cout<< "a*b = "<< a*b<<endl;
  cout<< "a/b = "<< a/b<<endl;
  cout<< "a*c = "<< a*c<<endl;
  cout<< "a/c = "<< a/c<<endl;
  cout<< "a==b  "<< (a==b) << endl;
  cout<< "a!=b = "<< (a!=b)<<endl;
  cout<< "a==c = "<< (a==c)<<endl;
  cout<<"c==0" << (c.get_finite()==complex<double>(0,0))<<endl;
  return 0;
}
