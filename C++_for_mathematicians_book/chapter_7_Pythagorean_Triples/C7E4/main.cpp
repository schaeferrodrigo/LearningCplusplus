#include "../PTriple.h"
#include "../gcd.h"
#include <iostream>
#include <algorithm>

using namespace std;

int check_legs(const PTriple P,const long k){
  if ((P.getA() == k) ||(P.getB() == k)){
    return 1;
  } else {
    return 0;
   }
}


int check_hypotenuse(const PTriple P, const long k){
  if (P.getC() == k){
    return 1;
  } else{
    return 0;}
  }


void table_unique(PTriple* table , PTriple* unique , long& new_index){
  sort(table, table+10000);
  unique[0] = table[0];
  new_index=1;  
  for(long jndex = 1; jndex <10000; jndex++){
    if (table[jndex] != table[jndex-1] ){
      //cout << table[index];
      unique[new_index] = table[jndex];
      new_index++;
    }
  }
}

int main(){
  int list_legs[100];
  int list_hypotenuse[100];
  PTriple table[10000];
  long index =0;
  PTriple unique[10000];
  long new_index;
  fill( list_legs, list_legs + 100, 0 );
  fill( list_hypotenuse , list_hypotenuse +100 , 0);
  
  
  for(int m =1; m<=100; m++){
    for(int n =1; n<= 100 ; n++){
        PTriple P(m,n);
        if(P.getA()<=100){
          table[index] = P;
          //cout <<table[index];
          index++;
         }
    }
  }
   
  table_unique(table,unique,new_index);
  for(long i = 0; i <= new_index; i++){
    PTriple Q = unique[i];
    cout << Q<< endl;
    for(int k= 1; k<=100; k++){
          list_legs[k-1] += check_legs(Q,k);
          list_hypotenuse[k-1] += check_hypotenuse(Q,k);
        }
  } 
  
  for(int k=1; k<= 100; k++) {
  cout << "The Pythagorean triple with one of the legs equal or hypotenuse equal to "  << k<<" are "<< list_legs[k-1]<<" + "<< list_hypotenuse[k-1]<< endl;
  }
  
  return 0;
}
