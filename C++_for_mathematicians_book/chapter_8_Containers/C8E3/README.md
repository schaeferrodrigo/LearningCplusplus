# Chapter 8 - Exercise 3

Suppose we wish to use sets of complex numbers in a program. As a test, we create this simple program
```
#include <complex>
#include <set>
using namespace std;

int main(){
  complex<double> z(2.,3.);
  set< complex<double> > A;
  A.insert(z);
  return 0;
}
```

This program creates a complex number z = 2 + 3i  and a set of complex numbers A into which we insert z. Unfortunately, the computer fails to compile this code and, and instead, prints out a long stream of error message that includes a complaint that there is

```
no match for const std::complex<double>& < const std::complex<double>&' operator
```

What is wrong and how we can fix this?


```
#include <complex>
#include <set>
#include <utility>

using namespace std;

/*
int main(){
  complex<double> z(2.,3.);
  set< complex<double> > A;
  A.insert(z);
  return 0;
}
*/

int main(){
  complex<double> z(2.,3.);
  set< pair<double,double> > A;
  A.insert(make_pair(z.real(), z.imag()));
  return 0;
  }
```

