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