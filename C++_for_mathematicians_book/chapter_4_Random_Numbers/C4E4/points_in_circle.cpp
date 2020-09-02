#include "../examples/uniform.h"
#include <cmath>
#include <iostream>

using namespace std;


void polar_method(double& x , double& y ){
  double pi = M_PI;
  double theta = 2.*pi* unif();
  x = cos(theta);
  y = sin(theta);
}

void rejection_method( double& x , double& y ){
  double radius_square, radius;
  do{
  x = unif();
  y = unif();
  radius_square = x*x + y*y;
  } while( radius_square >1.);
  radius = sqrt(radius_square);
  x = x/ radius;
  y = y/radius;
}

int main(){
   seed();
   double p_1, p_2;
   cout << " polar method started"<< "\n";
   for(long i = 1; i<= 1e+8; i++ ){
   polar_method( p_1, p_2);
  }
  cout << "polar method is finished" << "\n";
  cout << "rejection method started" <<"\n";
  for(long i = 1; i<= 1e+8; i++ ){
   rejection_method( p_1, p_2);
  }
  cout << "rejection method is finished";
  return 0;
  }

