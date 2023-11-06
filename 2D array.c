// 2D array 


#include<stdio.h>
int main ()
{
    int a[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
    int i,j;
    printf("THE 3 X 3 MATRIX : \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
            
        }
        printf("\n");
    }  
    
}
