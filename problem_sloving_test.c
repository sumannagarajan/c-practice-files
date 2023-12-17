/*

// problem sloving file
#include<stdio.h>
int main()
{
    int a = 5;
    int b = 2;
    float c = (float)a/b;
    printf("THE ANS IS %.1f \n ",c);
    return 0;
}

*/


#include<stdio.h>
int main()
{
    int a;
    printf("PLEASE ENTER THE VALUES : \n");
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("YOUR NUMBER IS EVEN NUMBER \n");
    }
    else
    {
        printf("YOUR NUMBER IS ODD NUMBER \n");
    }
    return 0;
}