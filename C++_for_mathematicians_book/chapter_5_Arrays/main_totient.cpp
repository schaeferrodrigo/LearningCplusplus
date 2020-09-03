#include <iostream>
#include "totient.h"

using namespace std;


int main(){
  for (int k =1; k < 100 ; k++){
    cout <<k<<"\t"<< totient( k ) << endl;
  }
  return 0;
}
