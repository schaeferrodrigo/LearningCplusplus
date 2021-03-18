#include "SmartArray.h"


int main(){
  SmartArray X(3);
  X[0] = 0;
  X[1] = 1;
  X[2] = 2;
  cout<< X;
  cout<<X[-1]<<endl;
  cout<<X[100]<<endl;
  return 0;
}
