#include <iostream>
#include  "SUM.h"
#include <cmath>

using namespace std;

int main(){
  int N = 1e+6;
  //cout << "Typer an integer number: ";
  //cin >> N;
  float inc_sum = sum_inc(N);
  float dec_sum = sum_dec(N);
  cout << "The sum of is (for k=1..N) " << sum_inc(N)<<endl;
  cout << "The sum of is (for k=N..1) "<< sum_dec(N)<<endl;
  //test for the best approximation
  double pi = M_PI;
  double limit = pow(pi,2)/6;
  double inc_diff = abs(limit - inc_sum);
  double dec_diff = abs(limit - dec_sum);
  if (dec_diff > inc_diff){
    cout << "the sum from N to 1 is better"<<endl;
    cout << dec_diff;
  }
  else if (dec_diff < inc_diff){
    cout << "the sum from 1 to k is better"<<endl;
    cout << inc_diff;
    }
  else{
    cout << " the sums are equal" <<endl;
    cout << dec_diff;
  }
  return 0;
}
