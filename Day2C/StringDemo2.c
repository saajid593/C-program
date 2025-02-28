#include <stdio.h>
int main(){
    // char c[6];
    // printf("enter the string");
    // scanf("%s",c);
    // printf("%s",c);


    //we can get a string beyond its length it is a abnormal behaviour
    // to solve this buffer overflow we use fgets() function
    // we cannot get multiple works by scanf().
    

    // char c [10];
    // printf("enter the string");
    //  scanf("%[^\n]s",c);

    //  //[^\n] -> scanset to eliminate '\n'

    //  printf("%s",c);
    
    // commands:
    // gets(),fgets(),puts(),putc(),getc(),fprintf(),sscanf(),sprintf()

   //fgets,puts
//    char c [12];
//    printf("enter a string ");
//    fgets(c, sizeof(c),stdin);
//    //printf("%s", c);
//     puts(c);
//     puts(c);

    //puts

    char c1;
    
    putc('h',stdout);
    putc('\n',stdout);
    putc('e',stdout);
    putc('l',stdout);
    putc('l',stdout);
    putc('o',stdout);
    


    return 0 ;
}