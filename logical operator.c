//LOGICAL OPERATOR

#include<stdio.h>
int main ()
{
    int a=5;
    int b=2;
    int c=0;
    printf("%d\n",a&&b); // TO PERFORM AND OPER
    printf("%d\n",a&&c); // TO PERFORM AND OPER
    printf("%d\n",a||c); // TO PERFORM OR OPER
    printf("%d\n",!(a>c && a>c)); //TO PERFORM NOT OPER 
    return 0;

}