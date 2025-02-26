#include <stdio.h>
int main(){
    {
        int x = 20, y =40;
        {
            printf("x = %d, y = %d\n",x,y);//x =10, y =20
            {
                int y = 40;
                x++;//11
                y++;//41
                printf("x = %d, y = %d\n",x ,y);//x = 11,y=41
            }
            printf("x = %d, y = %d\n",x,y);//x=11,y =20
        }    }
    return 0 ;
}