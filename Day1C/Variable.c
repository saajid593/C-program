#include <stdio.h>
int main(){

    int a = 10;
    // int 1a=20; invalid
    int a1=30;
    int _a=40;//invalid
    int a_=50;
    int _=60;//invalid
    int a_b=70;
    int ab = 80;
    int $a=90;//invalid
    int a$=100;
    int $ =110;//invalid
    int a$b = 120;
    int ab$=130;
    int $123=140;

    printf("%d %d %d %d %d",_a,_,$a,$,$123);

    return 0 ;
}