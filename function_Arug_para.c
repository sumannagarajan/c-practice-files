// paramaters & arguments in function
/*
#include<stdio.h>
void myfun(char name[] , int age)
{
    printf("Hi my name is %s and iam %d year old \n",name,age);

}
int main()
{
    myfun("suman",22);
    myfun("vicky",22);
    myfun("krishna",23);
    return 0;

}

*/

#include<stdio.h>
void myfun(int mynum[5])
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("THE VALUE OF mynum[%d] = %d\n",i,mynum[i]);
    }
    
}
int main()
{
    int mynum[5] = {10,20,30,40,50};
    myfun(mynum);
    return 0;

}
