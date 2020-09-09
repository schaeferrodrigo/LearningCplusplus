#ifndef TOTIENT_H
#define TOTIENT_H


/*
Euler's totient function
@param n the number whose totient we sekk

@return the number of elements in {1,...n}, such that gdc with n is 1

*/
/*

long totient( long n);

*/

/*
Euler's totient function
@param n the number whose totient we sekk

@param primes - the primes numbers less or equal than n

@return the number of elements in {1,...n}, such that gdc with n is 1

*/

long totient( long n , const long* primes);

#endif
