#include<stdio.h>
int main ()
{
    int a[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
    int i;
    int j;
    for ( i = 0; i < 3; i++)
    {
    for (j = 0; j < 3; j++)
    {
    printf("VALUE a[%d][%d] = %d \n ",i,j,a[i][j]);
    }
    }
    return 0;
    
}