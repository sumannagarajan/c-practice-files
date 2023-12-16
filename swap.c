// swapping the value without temp variable

#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("sawapping value of A & B\n");
    printf(" a = %d\n b = %d\n",a,b);
    return 0;

}