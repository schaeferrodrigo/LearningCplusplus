#include <iostream>
#include <algorithm>
#include "uniform.h"

using namespace std;

double median(double* array , long nels){
  if (nels == 0) return 0;
  if (nels == 1) return array[1];

  double* copy_array = array;
  sort(copy_array , copy_array+nels);
  
  if (nels % 2 == 0){
    long index = nels /2;
    return (copy_array[index-1] + copy_array[index])/2;
  }
  else{
    return copy_array[nels/2];
  } 
}


int main(){
  seed();
  double* array; 
  long nels;
  double median_elem;	
   
  nels = unif(20);
  array = new double[nels];
  cout << "For the list [";
  for(int index = 0 ; index < nels ; index++){
    array[index] = unif();
    cout<<"," << array[index];
  }
  cout <<"],the median is ";
  
  median_elem = median(array , nels);
  cout << median_elem <<endl;
  delete[] array;
  return 0;
 }


