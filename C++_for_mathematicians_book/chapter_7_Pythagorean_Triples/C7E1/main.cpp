#include "Interval.h"
#include "uniform.h"
#include <iostream>
#include <algorithm>

using namespace std;

Interval randomInterval(){
  double a = unif();
  double b = unif();
  return Interval(a,b);
}


double findAmaxim(const Interval* list , long num_of_int){
  double a_candidate = list[0].getA();
  for(long index =1; index < num_of_int; index++){
    if(list[index].getA() > a_candidate){
      a_candidate = list[index].getA();
    }
  }
  return a_candidate;
}

double findBminimum( const Interval* list, long num_of_int){
  double b_candidate = list[0].getB();
  for( long index = 1; index < num_of_int ; index++){
    if(list[index].getB() < b_candidate){
      b_candidate = list[index].getB();
    }
  }
  return b_candidate;
}


long checkIntersection(const Interval* list , long number_of_elements){
  //sort(list,list + number_of_elements);
  double b_minimum, a_maximum;
  b_minimum = findBminimum(list, number_of_elements);
  a_maximum = findAmaxim(list , number_of_elements);
  for (long index = 0; index < number_of_elements; index++){
     if ((a_maximum <= list[index].getB())&& (list[index].getA() <= b_minimum)){
       return 1;
     }
  }
 
  return 0;
 }


void fill_List(long num_of_int , Interval* list){
  for(long index = 0; index < num_of_int; index++){
    list[index] = randomInterval();
  }
}



int main(){
  long num_of_exp, num_of_int, count;
  Interval* list;
  double probability;

  num_of_exp = 100000;
  num_of_int = 100;
  count = 0;
  
  seed();
   
  for(long test = 1; test <= num_of_exp ; test++){
    list = new Interval[num_of_int];
    fill_List( num_of_int , list);
    //cout << list[0];
    count+= checkIntersection(list , num_of_int);
    delete[] list;
  }
  
  probability = double(count)/double(num_of_exp);
  cout << count<<endl;
  cout<< "The estimated probability for " <<num_of_exp << " experimentos with "<< num_of_int << " intervals is " << probability<< "." <<endl;    
  return 0;
}
