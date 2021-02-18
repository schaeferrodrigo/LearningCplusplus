#include "EuclideanVector.h"
#include <iostream>
#include <vector>

using namespace std;

int main(){
  EuclideanVector u , v, w;
  u = EuclideanVector();
  cout<< u <<"\n";
  v = EuclideanVector(3);
  v.set_coord(1,1);
  v.set_coord(2,2);
  v.set_coord(3,2);
  w = EuclideanVector(2);
  w.set_coord(1,1.);
  w.set_coord(2,1.);
  cout<< v<<"\n";
  cout <<w <<"\n";
  cout<<w+v<<"\n";
  double s = 4;
  cout << s*w<<"\n";
  cout<< w*s <<"\n";


  return 0;
}
