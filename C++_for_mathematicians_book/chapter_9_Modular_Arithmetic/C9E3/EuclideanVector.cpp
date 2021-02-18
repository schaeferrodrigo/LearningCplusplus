#include "EuclideanVector.h"
#include <iostream>
#include <vector>

using namespace std;

int EuclideanVector::default_dimension = INITIAL_DEFAULT_DIMENSION;

EuclideanVector EuclideanVector::operator+(EuclideanVector& that){


  if(get_dimension() < that.get_dimension()){
    dimension = that.get_dimension();
    v.resize(dimension);
  }
  if(get_dimension() > that.get_dimension()){
    that.dimension = get_dimension();
    that.v.resize(that.dimension);

  }

  int dim  = get_dimension();
  EuclideanVector add = EuclideanVector(dim);
  for(int index = 1; index < dim; index++){
    add.set_coord(index, coord(index) + that.coord(index));
  }

  return add;
}

EuclideanVector EuclideanVector::operator*(double k) const{
  int dim = get_dimension();
  EuclideanVector scal_mult;
  scal_mult = EuclideanVector(dim);
  for(int index = 1; index <= dim; index++){
    scal_mult.set_coord(index, k*(coord(index)));
  }
  return scal_mult;
}

bool EuclideanVector::operator==(EuclideanVector that) {

  if(get_dimension() < that.get_dimension()){
    dimension = that.get_dimension();
    v.resize(dimension);
  }
  if(get_dimension() > that.get_dimension()){
    that.dimension = get_dimension();
    that.v.resize(that.dimension);
  }

  int limit = get_dimension();
  for(int index = 1 ; index <= limit ; index++ ){
    if (coord(index) != that.coord(index)){
      return false;
    }
  }
  return true;
}

bool EuclideanVector::operator!=(EuclideanVector that){
  return !(*this == that);
}

ostream& operator<<(ostream& os ,const EuclideanVector& v){
  int dim = v.get_dimension();
  os << "( ";
  for(int index = 1; index <= dim; index++){
    if (index!=1){
      os<<" , ";
    }
    os << v.coord(index);
  }
  os << " ) \n";
  return os;
}
