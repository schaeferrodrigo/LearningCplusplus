
/*
 "If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

 Find the sum of all the multiples of 3 or 5 below 1000."
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int sum = 0;
  int num = 0;
  int limit = 1000;
  while (num < limit){
    if (num % 3 ==0 || num % 5 == 0){
      sum += num;
    }
    num +=1;
  }
  cout << "the sum of all the multiples of 3 or 5 is " << sum;
  return 0;
}
