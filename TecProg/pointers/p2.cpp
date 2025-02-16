#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}


void swap2( int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){


    int a, b;
    a = 10;
    b = 20;
    swap(a, b);
    printf("a = %d, b = %d\n", a, b);

    int *pa, *pb;
    pa = &a;
    pb = &b;

    swap2( pa, pb);
    printf("a = %d, b = %d\n", a, b);

    return  0;

}