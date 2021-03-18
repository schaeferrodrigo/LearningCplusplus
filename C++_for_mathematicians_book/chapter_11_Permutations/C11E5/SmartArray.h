#ifndef SMARTARRAY_H
#define SMARTARRAY_H

#include <iostream>

using namespace std;

class SmartArray{

private:

  long* array;
  long size;


public:

 SmartArray(){
   size= 1;
   array = new long[size];
  }

  SmartArray(long k){
    size = k;
    array = new long[size];
  }

  ~SmartArray(){
    delete[] array;
    cout<< "Destructor ran"<<endl;
  }

  long& operator[](long k);

  long size_of()const{return size;}
};

ostream& operator<<(ostream& os , SmartArray& P);


#endif
