Write a procedure to print set of long integers to the screen. The elements of the set should be enclosed between curly braces and separated by commas. (Be sure that the last element of the set is not followed by a comma.)


```
#include "print_set.h"
#include <iostream>
#include <set>

using namespace std;



ostream& operator<<(ostream& os , const set<long>& S){
  
  set<long>::iterator si;
  os << "{ ";
  for(si = S.begin(); si != S.end(); si++){
    if (si != S.begin()){
      os << " , ";
    }     
   os << *si;
  }
  os << " }";
  return os;
}
```

[Repository link](https://github.com/schaeferrodrigo/LearningCplusplus/tree/master/C%2B%2B_for_mathematicians_book/chapter_8_Containers/C8E2)
