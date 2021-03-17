
#ifndef PARTITION_H
#define PARTITION_H

#include <iostream>

using namespace std;


class Partition{

private:

  int* set_of_parts;
  int sum;
  int num_of_parts;

public:

  /*A construtor that creates the empty partition */

  Partition(){
    sum = 0;
    set_of_parts = new int[1];
    num_of_parts = 0;
  }
  ~Partition(){
    cerr<< "Destruction ran"<<endl;
    delete[] set_of_parts;
  }

  void add_part(int new_part);

  int get_sum()const{return sum;}

  int nparts()const{ return num_of_parts;}

  int operator[](int k)const;

  Partition operator=(const Partition& that);

  bool operator<(const Partition& that) const;
};



ostream& operator<<( ostream& os , const Partition& P);

#endif
