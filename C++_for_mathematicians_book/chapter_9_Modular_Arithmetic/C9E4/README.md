
Let S denote the set {sqrt(n): n in Z, n>= 0}. Define an operation * on S by x * y = sqrt( x^2 + y^2 ). Create a C++ class to represent elements of the S that includes an ```operator*```that implements S's operation.
Include methods to get the value n, to convert an element of S into a decimal approximation, and ```operator<<```to write elements of S to the screen.

## Solution

``` 
#ifndef SQUAREROOT_H
#define SQUAREROOT_H

#include <cmath>
#include <iostream>

using namespace std;


class SquareRoot{

private:
  long integer;

public:

  SquareRoot(){
    integer = 0;
    }

  SquareRoot(long n){
    if( n < 0){
      cout << "INVALID VALUE";
      SquareRoot();
    }
    else{
      integer = n;
      }
  }

  long get_integer()const{return integer;}

  SquareRoot operator*(const SquareRoot that) const{
    SquareRoot hyp;
    //hyp( get_integer() + that.get_integer());
    hyp = SquareRoot( get_integer() + that.get_integer() );
    return hyp;
  }

  double dec_SquareRoot(){
    double square = sqrt(get_integer());
    return square;
  }
};

inline ostream& operator<<(ostream& os ,  const SquareRoot& element){
  os <<" square root of "<< element.get_integer()<< endl;
  return os;
};

#endif
```

[.h file](squareroot.h)<br>
[.cpp file](squareroot.cpp)<br>
[Repository link](https://github.com/schaeferrodrigo/LearningCplusplus/tree/master/C%2B%2B_for_mathematicians_book/chapter_9_Modular_Arithmetic/C9E4)
