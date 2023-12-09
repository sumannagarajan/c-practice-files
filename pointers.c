// pointers

#include<stdio.h>
int main()
{
    int age = 22;
    int *p = &age; //declation of pointer variable 
    printf("my age is : %d\n",age); // display the value store in age
    printf("address of the age is %p\n",&age);
    printf("To print the address of *p %p\n",p);
    return 0;

}