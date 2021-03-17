#ifndef COUNTED_H
#define COUNTED_H

#include <iostream>

using namespace std;


class Counted{

private:
  static long num_elements;

public:

 static long count(){
    return num_elements;
  }
  Counted(){
    num_elements +=1;
  }
  ~Counted(){
    num_elements -=1;
  }

};

#endif
