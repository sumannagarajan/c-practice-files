// swapping the 2 values by using temp variable 

#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    int temp; // temp variable 
    temp=a;
    a=b;
    b=temp;
    
    printf("THE SWAPED VALUE OF A & B\n a = %d\nb = %d\n",a,b);
    return 0;



}