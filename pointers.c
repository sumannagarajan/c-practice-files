// pointers

#include<stdio.h>
int main()
{
    int age = 22;
    int *p = &age; //declation of pointer variable 
    printf("my age is : %d\n",age); // display the value store in age
    printf("address of the age is %p\n",&age); //display the address location variable age
    printf("To print the address of age with pointer variable %p\n",p); //To display the address location with pointer variable (REFERENCE)
    printf("To print the value of age with pointer %d\n",*p); //display the value of age with pointer (DEREFERENCE)
    return 0;

}