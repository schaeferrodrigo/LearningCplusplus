#include "fibonacci.h"
#include <iostream>

using namespace std;


int main(){
  long last_index;
  long* fibonacci_list;
  
  last_index = 20;
  fibonacci_list = new long[last_index +1];
  
  fibonacci_numbers(last_index , fibonacci_list);
  
  cout<< "The fibonacci list from index 0 to " << last_index << " is: " << endl;

  for (long index =0; index <= last_index; index++){
    cout <<" " <<fibonacci_list[index]<< " ";
  }
  cout << endl;
 delete[] fibonacci_list;
 return 0;
}
