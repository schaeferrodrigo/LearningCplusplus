#include "mycomplex.h"
#include <set>

int main(){
  MyComplex z_1 = MyComplex();
  MyComplex z_2 = MyComplex(1.);
  MyComplex z_3 = MyComplex(2.,1.);
  MyComplex z_4 = MyComplex(1.,2.);

  cout << z_1<<endl;
  cout<< (z_2< z_3)<<endl;
  cout <<( z_3< z_3)<<endl;
  cout << (z_4 < z_3) << endl;

  //suggested test by book

  MyComplex z;
  MyComplex w(2.);
  MyComplex v(-5,2);

  set<MyComplex> S;
  S.insert(z);
  S.insert(w);
  S.insert(v);

  set<MyComplex>::iterator si;
  for(si = S.begin(); si!=S.end(); si++){
    cout << *si<<" ";
  }
  cout <<endl;

  return 0;
}
