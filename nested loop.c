
// Nested loop
//posible to one loop inside another loop

#include<stdio.h>
int main ()
{
    int a;
    int b;
    for ( a = 1; a <=3 ; a++)
    {
        printf("THIS IS FROM PARRENT FOR LOOP : %d\n",a);
    for ( b = 1; b <=5; b++)
    {
        printf("THIS IS FROM CHILD FOR LOOP :%d\n",b);
    }
    }
    return 0;

    
} 

