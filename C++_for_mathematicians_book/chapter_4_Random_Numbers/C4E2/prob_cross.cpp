#include "../examples/uniform.h"
#include <cmath>
#include <iostream>

using namespace std;


int main(){
  long num_exper = 1e+8; // number of experiments
  long count = 0;
  double pi = M_PI;
  seed();
  for (long i =1; i<= num_exper; i++){
    double x_0 = unif(); // position of an extreme of needle"
    double theta = unif(0 , 2*pi);
    double x_1 = x_0 + cos(theta);
    if ((x_1 < 0) || (x_1>1)){
      count +=1;
    }
    }
  double prob_cross = float(count)/float(num_exper);
  cout << "the probability of cross is "<< prob_cross <<endl;
  return 0;
}
