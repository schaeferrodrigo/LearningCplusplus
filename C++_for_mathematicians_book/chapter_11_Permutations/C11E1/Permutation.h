#ifndef PERMUTATION_H
#define PERMUTATION_H

#include <iostream>
using namespace std;

class Permutation{

private:
  long n; // number of elements
  long* data; // to store the elemnts of the Permutation. the element data[0] won't be used. its lenght will be n+1

public:
  Permutation();
  Permutation(long nels);
  Permutation(long nels , long* array);
  Permutation(const Permutation& that);// the permutation created is a copy of that
  ~Permutation(){delete[] data;}

  void swap(long i , long j);
  void randomize();
  void reset();

  bool check() const; //check is an array is a valid permutation

  long getN() const {return n;}
  long of(long k) const;
  long operator()(long k)const {return of(k);}

  Permutation operator=(const Permutation& that);

  Permutation operator*(const Permutation& that ) const;
  Permutation operator*=(const Permutation& that);

  Permutation inverse() const;

  Permutation permute(const Permutation& that);

  bool operator==(const Permutation& that)const;
  bool operator!=(const Permutation& that)const;
  bool operator<(const Permutation& that) const;
  bool isIdentity() const;

};

ostream& operator<<(ostream& os, const Permutation& P );

#endif
