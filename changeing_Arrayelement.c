// changeing the array element with pointers 

#include<stdio.h>
int main()
{
    int a[4] = {10,20,30,40};
    *a = 100;
    *(a +1) = 200;
    *(a +2) = 300;
    printf("%d\n",*a);
    printf("%d\n",*(a +1));
    printf("%d\n",*(a +2));
    return 0;
    
}