#include<stdio.h>
int main(){

    int a[]= {1,2,3,4,5};
    int  n = sizeof(a)/sizeof(a[0]);
    printf("Before sorting:");
    for(int i =0;i<sizeof(a)/ sizeof(a[0],i++))
    {
        printf("%d ",a[i]);


    }

    // 2 1 5 4  3  2>1  2>a[1]
    // 1 2 5 4  3  2>5  2>a[2]
    // 1 2 4 5  3  2>4  2>a[3]
    // 1 2 4 3  5  2>3  2>a[4]

    for(int i = 0; i<n; i++)
    {
       for(int j= i +1; j<n; j++)
       {

        if(a[i]>a[j])c
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
       }
    }

    printf("\nAfter sorting:");
    for(int i =0;i<sizeof(a)/ sizeof(a[0],i++))
    {
        printf("%d ",a[i]);


    }

    return 0 ;

}