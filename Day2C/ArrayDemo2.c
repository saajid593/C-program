#include <stdio.h>
int main(){
    // int a[]= {1,2,3,4,5};
    // printf("%u\n",&a);
    // printf("%u\n",&a[0]);

    // printf("%u",&a[1]);
    // printf("%u",&a[2]);
    // printf("%u",&a[3]);

    // char c[10] = {'h','e','l','\0'};
    // printf("%u\n",&c);
    // printf("%u\n",&c[0]);

    int  a=2;
    int *p = &a;
    printf("%u\n",&a);
    printf("%d\n",p);
    printf("%d\n",a);
    printf("%u\n",*p);

     
    return 0;
}