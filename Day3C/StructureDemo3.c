#include <stdio.h>
typedef struct studentDetailsForCollege
{
    int a;
    char c;
    char name[10];
    int regno;
    int batch;
}stu;
int main()
{
    printf("The size of datatype is %d",sizeof(stu));

    return 0;
}