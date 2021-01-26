#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

void print_element(long element){
  cout<<" "<< element <<" ";
}

ostream& operator<<(ostream& os , const set<long>& S){

  os << "{ ";
  for_each(S.begin(),S.end(),print_element);
  os << " }\n";
  return os;
}
