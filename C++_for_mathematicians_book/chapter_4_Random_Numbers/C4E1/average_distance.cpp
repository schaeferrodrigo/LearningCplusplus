#include <iostream>
#include "uniform.h"
#include <cmath>

using namespace std;

double norm_vector(double x_01, double x_02, double x_11, double x_12){
  double distance = sqrt((x_01 - x_11)*(x_01 - x_11) + (x_02-x_12)*(x_02-x_12));
  return distance;
}

int main(){
  long number_exper = 1e+9;
  double sum = 0;
    for (long i=1; i<= number_exper; i++){
      double x_01 = unif();
      double x_02 = unif();
      double x_11 = unif();
      double x_12 = unif();
      //cout << x_01 <<" "<<x_02<<" "<<x_11 << " "<< x_12<<endl;
      double distance = norm_vector(x_01, x_02, x_11, x_12);
      sum += distance;
      }
  double average = sum / number_exper;
  cout<< " the average distance is "<< average<<endl;
  return 0;
  }
