# Pointers

based notes in "Le Langage C" (Kernighan & Ritchie)

## Pointers

A pointer is a variable that contains the address of another variable. It is way to keep programs more compact and efficient.

Suppose that x is a variable of type int. The address of x can be obtained by using the operator &.

int x;
int *px;
px = &x;  //assign the address of x to px

We say that px is a pointer to x. The operator & cannot be applied with expressions or values. 

The unary operator * considers its operand as the address of the final recipient and only uses this address to access its content.

int y;
y = *px; // assign the value of x to y

*px = 0; // assign 0 to x

## Pointers and functions' parameters

C cannot modify the value of a parameter passed to a function. However, it is possible to modify the value of a variable passed as a pointer.

For example, the function swap() can be defined as follows:

void swap2( int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

## Pointers and arrays

The declaration 

int a[10];

creates an array of 10 integers. The notation a[i] refers to the i-th element of the array, where i is from 0 to 9.
Declare 

int *pa;
pa = &a[0];

pa points to the first element of the array, that is, contains the address of a[0]. Therefore,

x = *pa;

assigns the value of a[0] to x. If pa points to the i-th element of the array, then pa+i points to the (i+1)-th element of the array. Therefore,

y = *(pa+1);
assigns the value of a[1] to y.

The correspondence between arrays and pointers is so close that the name of an array is a pointer to the first element of the array. Therefore,

pa = &a[0]; 
is equivalent to
pa = a;

Moreover, the notation a[i] is equivalent to *(a+i). The same way, &a[i] is equivalent to a+i, and represents the address of the i-th element of the array.

There is a difference between an array and a pointer. The name of an array is a constant, that is, it cannot be modified. For example, the following statement is illegal:
a = a+1;

When an array is passed as a parameter to a function, the function receives a pointer to the first element of the array. For instance, in the definition of a function, char s[] is equivalent to char *s.
