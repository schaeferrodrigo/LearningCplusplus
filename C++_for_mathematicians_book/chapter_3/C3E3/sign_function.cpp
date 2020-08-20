/*
* Function to calculate the sign of the argument
*/
#include "SIGN.h"
//using namespace std;


int sign_arg(double x){
  if (x>0.){
    return 1;
  }
  else if (x == 0.){
    return 0;
  }
  else {
    return -1;
  }
}
