#include <stdio.h>
#include <string.h>
typedef struct studentDetailsForCollege
{
    int regno;
    char name[10];
    int batch;
    
    
}stu;
int main()
{
    stu s1;
    printf("Enter the regno");
    scanf("%d", &s1.regno);
    printf("%d\n", &s1.regno);

    
    printf("Enter the name");
    fgets(s1.name,sizeof(s1.name),stdin);//append \n to s1.name automatically
    printf("The name is %s",s1.name);
    

    return 0;
}
