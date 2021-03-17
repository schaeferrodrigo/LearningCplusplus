#include "Partition.h"
#include <iostream>

using namespace std;


int Partition::operator[](int k)const{
  if((k<=0) ||(k>num_of_parts)){
    cout<< "There is an error"<<endl;
    return 0;
  }
  return set_of_parts[k];
}

void Partition::add_part(int new_part){

  int temp_array[num_of_parts];
  for(int i = 1; i <= num_of_parts; i++){
    temp_array[i] = set_of_parts[i];
  }
  delete[] set_of_parts;

  num_of_parts +=1;
  set_of_parts = new int[num_of_parts+1];

  for(int j =1; j< num_of_parts; j++){
    set_of_parts[j] = temp_array[j];
  }

  int index = 1;
  while((new_part < set_of_parts[index]) &&(index <= num_of_parts-1)){
    index++;
  }
  if(new_part>= set_of_parts[index] ){
      for(int jndex = num_of_parts-1; jndex>=index; jndex--){
        set_of_parts[jndex+1] = set_of_parts[jndex];
      }
      set_of_parts[index] = new_part;
    }
    else{
      set_of_parts[num_of_parts] = new_part;
    }
  sum += new_part;
}

Partition Partition::operator=(const Partition& that){
  sum = that.sum;
  num_of_parts = that.num_of_parts;
  set_of_parts = new int[num_of_parts+1];

  for(int index= 1; index<= num_of_parts; index++){
    set_of_parts[index] = that.set_of_parts[index];
  }
  return (*this);
}


bool Partition::operator<(const Partition& that) const{
  if(get_sum()< that.get_sum()){return true;}
  if(get_sum()> that.get_sum()){return false;}

  if(nparts()< that.nparts()){return true;}
  if(nparts()> that.nparts()){return false;}


  for(int index= 1; index<= nparts(); index++){
    if(set_of_parts[index] < that[index]){return true;}
    if(set_of_parts[index] > that[index]){return false;}
  }

  return false;
}

ostream& operator<<(ostream& os, const Partition& P){
  os<< P.get_sum()<< " = ";
  for(int index =1; index <=P.nparts(); index++){
    if(index!= 1){
      os<<" + ";
    }
    os<<P[index];
  }
  return os;
}
