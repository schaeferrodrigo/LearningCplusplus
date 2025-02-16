#include <stdio.h>

int srtlen(char *s) {
    int n ;
    for ( n = 0; *s != '\0'; s++)
    {
        n++;
    }
    printf("Length of string: %d\n", n);
 
   return n;
   
}

int srtlen2(char s[]) {
    int n ;
    for ( n = 0; *s != '\0'; s++)
    {
        n++;
    }
    printf("Length of string: %d\n", n);
 
   return n;
   
}


int main(){


   char s[]= "Hello world";

    srtlen(s);
    srtlen2(s);

    return  0;

}