#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


void sort_vector(vector<int>& my_vector){
  sort(my_vector.begin(), my_vector.end());
}


int main(){
  vector<long> my_vector(10);
  for(int index = 0; index<10 ; index++){
    my_vector[index] = 10-index;
  }
  sort(my_vector.begin(), my_vector.end());
  cout<< "my sorted vector is (";
  for(int jndex= 0; jndex <10; jndex++){
    cout<<my_vector[jndex];
    if(jndex != 9){
      cout<<",";
    }
  }
  cout<<").\n";

  return 0;
}
