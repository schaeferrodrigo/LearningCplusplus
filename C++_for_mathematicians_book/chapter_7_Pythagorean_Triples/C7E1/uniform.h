#ifndef UNIFORM_H
#define UNIFORM_H


/*
* Generate a random number in interval [0,1]
*@return a random number in [0,1]
*/

double unif();

/*
*Generate a random number in an interval [a,b]
*@param a, a real number
*@param b, a real number
*@return a number in [a,b]
*/

double unif( double a, double b);

/*
*Generate a random number in a set {1,...,n};
*@param n, an integer number
*@return an interger number in {1,...,n}
*/

long unif( long n );


/*
*Reset seed of random numbers
*new seed based on computer's clock
*/

void seed();

#endif
