#include "quartenions.h"
#include <iostream>


using namespace std;

int main(){
  Quartenions u, v;
  u = Quartenions(1,2,3,-4);
  v = Quartenions(-2, 1 ,2 , 5);
  cout << edge_product(u , v);
  cout << u +v;
  cout << u-v;
  cout << 2*u;
  cout << u/2;
  u+=v;
  cout<< u;
  return 0;
}
