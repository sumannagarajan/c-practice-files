//loop array pointer

#include<stdio.h>
int main()
{
    int my_num[5] = { 10,20,30,40,50};
    int *ptr = my_num;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n",*(ptr + i));
    }
    return 0;


}