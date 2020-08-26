#include <iostream>
#include "FIBONACCI.h"

using namespace std;

int main(){
  int n;
  cout << " Type a number: ";
  cin >> n;
  cout << "term of fibonacci sequence using for =" << fibonacci_for(n)<< endl;
  cout << "term of fibonacci sequence using recursion = "<< fibonacci_rec(n);
  return 0;
}
