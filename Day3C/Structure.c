#include  <stdio.h>

struct student{
        int regno;
        char name[10];
        int batch;
};
int main(){
    // int a =10;
    struct student s1;
    printf("Enter the regno");
    scanf("%d",&s1.regno);
    printf("My regno is %d",s1.regno);

    printf("\nEnter the name");
    scanf("%s",s1.name);
    printf("My name is %s\n",s1.name);

    printf("\nEnter the batch");
    scanf("%d",s1.batch);
    printf("My batch is %d\n",s1.batch);




    return 0;
}