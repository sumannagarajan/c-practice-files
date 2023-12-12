// practiceing the array using pointer and accesing array through pointer

#include<stdio.h>
int main()
{
    int mynum[5] = {10,20,30,40,50};
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf(" THE VALUE OF mynum[%d] = %d\n",i,*(mynum +i));
    }
    return 0;
}