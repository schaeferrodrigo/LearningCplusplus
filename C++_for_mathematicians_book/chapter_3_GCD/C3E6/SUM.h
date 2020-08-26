#ifndef SUM_H
#define SUM_H

/**
* functions to calculate the sum of 1/k^2 for 1<=k<=N
* @param N interger , upper bound of k
* @return sum
*/

float sum_inc(long N); // function to calculate the sum, with that inital k is 1.
float sum_dec(long N); // function to calculate the sum where the inital k is N

#endif
