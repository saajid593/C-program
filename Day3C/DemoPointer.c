#include <stdio.h>
int main()
{ 
    int a =20;
    int *p = &a;
    int **p1=&p;//double pointer
    
    printf("the value of a is %d\n",a);
    printf("the address of a is %d\n",&a);
    printf("the address stored inside p is %d\n",p);
    printf("the address of a is %d\n",&p);
    printf("the value inside p is %d\n",*p);
    printf("the address of p1 is %d\n",&p1);
    printf("the value inside of p1 is %d\n",**p1);

    return 0;

}