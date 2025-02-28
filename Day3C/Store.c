#include <stdio.h>
struct store{
    double price;//8
    char *title;//2+2
    char *author;//2+2
    int num_pages;//4
    int colour;//4
    int size;//4
    char *design;//2+2

};
int main()
{
    struct store book;
    printf("%d",sizeof(book));

    return 0;
}