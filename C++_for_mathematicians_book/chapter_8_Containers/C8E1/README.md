In Mathematics, the elements of a set can themselves be sets. Show how to declare a set of sets of integers in C++ and write a short program that creates the set ![fig](CodeCogsEqn.gif).

```
#include <iostream>
#include <set>

using namespace std;

int main(){

  set<long> S , T, U;
  for(int i =1; i<=6 ; i++){
    if (i<=3){
      S.insert(i);
    }
    else if (i<=5){
      T.insert(i);
    }
    else{
      U.insert(i);
    }
  }

  set<set<long> > big_set;
  big_set.insert(S);
  big_set.insert(T);
  big_set.insert(U);


  set<set<long> >::iterator si;
  set<long>::iterator ti;

  cout << "{ ";
  for(si = big_set.begin();si !=big_set.end();si++){
    if(si != big_set.begin()){
      cout<<" , ";
    }
    set<long> L = *si;
    cout << "{ ";
    for(ti = L.begin(); ti != L.end() ; ti++){
      if(ti != L.begin()){
        cout << " , ";
      }
      cout << *ti;
    }
    cout<<" }";
  }
  cout <<" }"<<endl;

  return 0;
}
```

[link](main.cpp)
