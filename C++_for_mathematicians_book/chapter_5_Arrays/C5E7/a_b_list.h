#ifndef A_B_LIST_H
#define A_B_LIST_H

/*

Function that holds two lists, one for values for a_n and other for b_n, where a_0 = b_0 = 1, a_n = b_n-1 and b_n = a_n-1 + 2*b_n-1

@param limit - the last index
@param values_a - list of values of a_n
@param values_b - list of values of b_n

*/

void a_b_list(long long limit , long long* values_a, long long* values_b);

#endif
