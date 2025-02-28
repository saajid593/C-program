#include <stdio.h>
typedef struct  Employee
{
    int empno;
    char name[100];

}emp;
int main()
{
    // emp e1 = {5, "hello"}; //invalid
    emp e1 = {4,"hello"};//in a same line declare and initialize

    printf("Emp no is %d\n",e1.empno);
    printf("Emp no is %s\n",e1.name);

    emp *p = &e1;
    printf("Emp no is%d\n",p->empno);
    printf("Emp name is %s\n", p->name);

    return 0;


}