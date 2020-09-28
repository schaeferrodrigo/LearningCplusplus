#ifndef PTRIBPLE_H
#define PTRIPLE_H

#include <iostream>

using namespace std;

/*
a² + b^2 = c^2
*/

class PTriple{

  private:
    long a;
    long b;
    long c;

    void reduce();
    
  public:
    PTriple(){
      a = b = c = 0; 
    }
    PTriple(long m , long n);
    
    //    
    long getA() const{
      return a;    
    }

    long getB() const{
      return b;
    }
    long getC() const{
      return c; 
    }

    // operators
    
    bool operator==( const PTriple& that) const{
      return ((a==that.a) && (b==that.b) && (c==that.c));
    }
     
    bool operator!=( const PTriple& that) const{
      return !( (*this) == that);
    }

    bool operator<( const PTriple& that) const; 
    
};

ostream& operator<<( ostream& os , const PTriple& PT ); 


#endif


