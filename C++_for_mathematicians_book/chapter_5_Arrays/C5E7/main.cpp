#include "a_b_list.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  long long limit;
  long long* values_a;
  long long* values_b;
  
  limit = 15;
  values_a = new long long[limit + 1];
  values_b = new long long[limit + 1];

  a_b_list( limit , values_a , values_b );

  cout << setprecision(20);
  for(long long index = 0; index <= limit; index++){
    cout << " "<< index << " " << values_a[index] << " " << values_b[index]<<" "<<double(values_a[index])/values_b[index]<<endl; 
  }
  delete[] values_a;
  delete[] values_b; 
  return 0;
}
