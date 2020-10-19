# Exercises - Chapter 8


## Exercise 1.

In Mathematics, the elements of a set can themselves be sets. Show how to declare a set of sets of integers in C++ and write a short program that creates the set ![fig](C8E1/CodeCogsEqn.gif).


## Exercise 2.

Write a procedure to print set of long integers to the screen. The elements of the set should be enclosed between curly braces and separated by commas. (Be sure that the last element of the set is not followed by a comma.)

## Exercise 3.


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
