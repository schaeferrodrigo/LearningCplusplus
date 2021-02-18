
Create a class named ```EuclidenaVector```to  represent vectors in a Euclidean space R^n and give it the following attributes.

* There should be a default dimension (as a static class variable). Give static methods for inspecting and adjusting this default dimension.
* There should be a zero-argument constructor that gives the zero vector in the default dimension. There should be a single argument constructor ```EuclideanVector(int n)``` that creates the zero vector in R^n.
* There should be methods to get and set the individual coordinates of the vector.
* There should be a method to learn the dimension of the vector.
* There should be an ```operator+``` for adding vectors. Decide what the behavior should be in case the two vectors are of different dimension.
* There should be an ```operator*```method for scalar multiplication. Be sure to allow both scalar-vector and vector-scalar multiplication.
* There should be an ```operator==```and an operator ```operator!=```for comparing vectors for equality.
* There should be na ```operator<<```for writing vectors to the computer screen.

## Solution

``` 
#ifndef EUCLIDEANVECTOR_H
#define EUCLIDEANVECTOR_H

#include <vector>
#include  <iostream>

using namespace std;

const int INITIAL_DEFAULT_DIMENSION= 3;

class EuclideanVector{

private:
  static int default_dimension;
  vector<double> v;
  int dimension;

public:

  static int get_default_dimension(){return default_dimension;}

  static void set_default_dimension(int new_dimension){
    if (new_dimension<=0){
      default_dimension = INITIAL_DEFAULT_DIMENSION;
    }
    else{
      default_dimension = new_dimension;
    }
  }

  EuclideanVector(){
    dimension = default_dimension;
    v.resize(dimension);
    for(int index = 1; index <= dimension; index++){
      set_coord( index ,0.);
    }
  }
  EuclideanVector(int dim_space){
    if (dim_space<= 0){
      cout << "Negative or zero dimension!! Vector will be contruct with DEFAULT DIMENSION";
      dimension = default_dimension;
    } else {dimension = dim_space;}
    v.resize(dimension);
    for(int index = 1; index <= dimension; index++){
      set_coord(index,0.);
    }
  }

  double coord(int n) const {
    if (n<=0) {
      cout <<"ERROR!!"<<"\n";
      return -10000;
    }
    if (n>dimension){
      cout<< "Out of bound!Plese consult the current dimmension\n";
      return -10000;
    }
    return v[n-1];
  }

  void set_coord(int n , double x){
    if (n<=0) {
      cout <<"ERROR!!"<<"\n";
    }
    if (n>dimension){
      cout<< "Out of bound!Plese consult the current dimmension\n";
    }
    v[n-1] = x;
  }


  int get_dimension()const{
    return dimension;
  }

  EuclideanVector operator+(EuclideanVector& that);

  EuclideanVector operator*( double k) const;

  bool operator==( EuclideanVector that);

  bool operator!=(EuclideanVector that);

};

inline EuclideanVector operator*(double k, const EuclideanVector& v){
  return (v*k);
}

ostream& operator<<(ostream& os ,const EuclideanVector& v);

#endif
```

[.h file](EuclideanVector.h)<br>
[.cpp file](EuclideanVector.cpp)<br>
[Repository link](https://github.com/schaeferrodrigo/LearningCplusplus/tree/master/C%2B%2B_for_mathematicians_book/chapter_9_Modular_Arithmetic/C9E3)
