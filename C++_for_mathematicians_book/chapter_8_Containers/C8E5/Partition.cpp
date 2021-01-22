#include "Partition.h"
#include <iostream>
#include <vector>

using namespace std;


vector<int> Partition::get_parts(){
  int number_elements , index;
  vector<int> parts;

  if (P.nparts()==0 ){
    parts.resize(1);
    parts[0] =0;
    return parts;
  }

  number_elements = P.nparts();
  parts.resize(number_elements);

  index = 0;
  multiset<int>::iterator mi;
  for(mi = P.begin(), mi != P.end(), mi++){
    parts[index] = *mi;
    index++;
  }


  return parts;
}

bool Partition::operator<(const Partition& that) const{
  if(P.get_sum()< that.get_sum()){return true;}
  if(P.get_sum()> that.get_sum()){return false;}

  if(P.nparts()< that.nparts()){return true;}
  if(P.nparts()> that.nparts()){return false;}

  int last_index = P.nparts()-1;
  vector<int> P_vector = P.get_parts();
  vector<int> that_vector = that.get_parts();

  for(int index= 0; index != last_index; index++){
    if(P_vector[index] < that_vector[index]){return true;}
    if(P_vector[index] < that_vector[index]){return true;}
  }

  return false;
}

ostream& operator<<(ostream& os, const Partition& P){
  os<< P.get_sum()<< "=";
  multiset<int>::iterator mi;
  for(mi == P.begin();mi!=P.end();mi++){
    if(mi!= P.begin()){
      os<<" + ";
    }
    os<<*mi;
  }
  return os;
}
