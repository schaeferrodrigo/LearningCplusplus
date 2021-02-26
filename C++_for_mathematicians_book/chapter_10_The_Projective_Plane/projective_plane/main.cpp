#include <iostream>
#include "Projective.h"
#include "uniform.h"

int main(){
  seed();
  PPoint P;

  P.randomize();
  cout << "The random point P is "<< P<<endl;

  PLine L, M;

  L = P.rand_line();
  M = P.rand_line();

  cout<< "Two lines through P are L= "<< L <<endl<< " and M = "<<M<<endl;

  PPoint Q;
  Q = L*M;

  cout <<"The point of intersection of L and M is Q ="<<Q<<endl;

  cout<<"Is Q on L?"<< Q.is_on(L)<<endl;
  cout <<"Does M have P?"<< M.has(P)<<endl;

  if(P==Q){
    cout << "P and Q are equal"<<endl;
  }
  else{
    cout << "P and Q are NOT equal"<<endl;
  }
  return 0;
}
