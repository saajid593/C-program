#include <stdio.h>
int main(){


    int a =23;
    // int *p = &a;
    int *p;
    p = &a;

    printf("Address of a is %u\n",&a);
    printf("Address of p %u\n,&p");
    printf("Value of a is %d\n",a);
 
    printf("Value stored in the pointer p is %u\n",*p);
    printf("")


    return 0 ;
}