// for loop 
// we known the range means then we go for "forloop" insted of while loop

#include<stdio.h>
int main ()
{
    int a;
    for ( a = 0; a < 100; a=a+3)
    {
        printf("print the odd numbers: %d\n",a); // This will print the odd numbers of in  b/w 0 to 100
    }
    printf("%d\n",a);
    return 0;

}