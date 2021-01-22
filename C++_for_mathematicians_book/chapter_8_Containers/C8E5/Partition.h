#ifndef PARTITION_H
#define PARTITION_H

#include <iostream>
#include <set>
#include <vector>

using namespace std;


class Partition{

private:

  multiset<int> P;
  int sum;

public:

  /*A construtor that creates the empty partition */

  Partition(){
    sum = 0;
    P.clear();
  }

  /* An add_part method for adding a part */

  void add_part(int new_part){
    P.insert(new_part);
    sum += new_part;
  }

  /* A get_sum method for learning the sum of the parts
   in the partition*/

   int get_sum(){
     return sum;
   };

   /* An nparts method that reports the number of parts*/

   int nparts(){
     return P.size();
   }

  /* A get_parts that returns the parts of the partition
  in a vector <int> container */

   vector<int> get_parts();

   //opeartors

  /* An operator < to give a total order on the set of integer partitions */

  bol operator< const Partition& that) const;
};

/* An operator << for writing Partition objects 9 = 4+3+1+1*/

ostream& operator<<( ostream& os , const Partition& P);

#endif









}
