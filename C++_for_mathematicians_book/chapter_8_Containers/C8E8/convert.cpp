#include <vector>
#include <iostream>

using namespace std;

vector<long> convert_to_vector(int size_of_array, long* array){
  vector<long> conversion;
  conversion.resize(size_of_array);
  for(int index = 0; index < size_of_array; index++){
    conversion[index] = array[index];
  }
  return conversion;
}


int main(){
  int size_of_array;
  vector<long> converted;
  size_of_array = 10;
  long array[10];
  for(int index = 0; index <size_of_array; index++){
    array[index] = index;
  }
  converted = convert_to_vector(size_of_array , array);
  cout<< "the vector is (";
  for(int jndex = 0; jndex < size_of_array; jndex++){
    cout<< converted[jndex];
    if(jndex != size_of_array-1){
      cout<<",";
    }
  }
  cout<<" )"<<"\n";

  return 0;
}
