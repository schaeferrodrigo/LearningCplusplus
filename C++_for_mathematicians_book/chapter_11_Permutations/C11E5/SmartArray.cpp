#include "SmartArray.h"

long& SmartArray::operator[](long k){
  long true_index = k%size;
  if(true_index<0){true_index = size + true_index;}

  return array[true_index];
}

ostream& operator<<(ostream& os ,SmartArray& P){
  os << "[ ";
  for(int index= 0; index <P.size_of() ; index++){
    if(index != 0){
      os << " , ";
    }
    os<<P[index];
  }
  os<< "] "<<endl;
  return os;
}
