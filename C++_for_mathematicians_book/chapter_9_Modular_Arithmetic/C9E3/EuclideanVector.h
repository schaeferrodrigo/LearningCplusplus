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
