#include <iostream>
#include <cmath>
#include "CHANGE.h"

using namespace std;

int main(){
  double x , y , r ,t ;
  x = 2.; y = -1.;
  xy2polar(x,y , r, t);
  cout << "r = "<< r << " and t = "<< t<<endl;
  //r = 2; t = 2.5;
  polar2xy(r, t , x, y);
  cout << "x = " << x << " and y = "<<y;
  return 0;
}
