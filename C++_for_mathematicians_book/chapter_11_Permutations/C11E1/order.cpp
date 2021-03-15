#include "Permutation.h"
#include "uniform.h"
#include <iostream>

using namespace std;


long order_permutation(const Permutation& P){

  if(P.isIdentity()){return 1;}

  cout<< "i am here"<<endl;

  long order = 1;
  Permutation N;
  N = P;
  do {
    N = N.permute(P);
    cout<< N<<endl;
    order++;
  } while(!N.isIdentity());

  return order;
}

int main(){
  long n;
  cout<< "Put the length of the permutation ----> ";
  cin >> n;
  seed();
  Permutation P(n);
  P.randomize();
  cout<< "The permutation is ";
  cout<< P<<endl;
  long order_of_P;
  order_of_P = order_permutation( P );
  cout << "its order is "<< order_of_P<<endl;

  return 0;
}
