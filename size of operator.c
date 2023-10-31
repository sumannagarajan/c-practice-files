// TO CHECK THE SIZE OF THE DATA TYPE or VARIABLE 
// THIS WILL DIPLAY IN (bytes)

#include<stdio.h>
int main ()
{
    int a=10;
    float b=3.9;
    char mychar ='v';
    double mydouble = 90;
    printf("%lu\n",sizeof(a)); // format specifier %lu used for display the size of data type (or) variable in bytes
    printf("%lu\n",sizeof(b));
    printf("%lu\n",sizeof(mychar));
    printf("%lu\n",sizeof(mydouble));
    return 0;


}