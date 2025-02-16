#include <stdio.h>


int main(){

 int a = 10;
    int *pa;
    pa = &a;
 

    printf("Address of a: %p\n", &a);
    printf("Address of p: %p\n", pa);
    printf("Value of p: %d\n", *pa);
    a = 20;
    printf("Value of a: %d\n", a);
    printf("Value of p: %d\n", *pa);


    int y;
    y = *pa + 1; 
    printf("Value of y: %d\n", y);

    y = *(pa +1);
    printf("Value of y: %d\n", y);

    *pa = 0;
    printf("Value of *pa: %d\n", *pa);
    printf("Value of a: %d\n",  a);
    
    // printf("Value of a: %d\n", *(&p));
    // printf("Value of a: %d\n", *(&*p));
    // printf("Value of a: %d\n", *(&*(&a)));
    // printf("Value of a: %d\n", *(&*(&*(&a))));
    // printf("Value of a: %d\n", *(&*(&*(&*(&a)))));
    // printf("Value of a: %d\n", *(&*(&*(&*(&*(&a))))));
    return  0;

}