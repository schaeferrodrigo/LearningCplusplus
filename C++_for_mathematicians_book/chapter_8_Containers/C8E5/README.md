Create a class to represent integer partitions. Given a nonnegative integer n, a partition of n is a multiset of positive integers whose sum is n; the elements of the multiset are called the parts of the partition.

Name your class Partition and give it the following capabilities:

* A constructor that creates the empty partition of 0.
* An  add_part method for adding a part.
* A get_sum method for learning the sum of the parts in the partition (i.e., the number partitioned by this Partition).
* An nparts method that reports the number of parts in the partition.
* A get_parts that returns the parts of the partition in a vector<int> container.
* An operator< to give a total order in the set of integer partitions.
* An operator<< for writing Partition objects to the screen. Choose an attractive output format. For example, the partition {1,1,3,4} of 9 can be written to the screen as 9 = 4+3+1+1.
             
             
 [file .cpp](Partition.cpp)
 [file .h](Partition.h)
 [Repository link](https://github.com/schaeferrodrigo/LearningCplusplus/tree/master/C%2B%2B_for_mathematicians_book/chapter_8_Containers/C8E5)
                  
