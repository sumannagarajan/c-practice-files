/*
// dowhile loop

#include<stdio.h>
int main ()
{
    int suman = 1;
    do
    {
        printf("THIS IS SUMAN_NAGARAJAN \n");
        suman++;
    } while (0); //condition 0 zero means false so condition false means also do while is execute at least one time
    return 0;
    
}

*/ 

// now condition is true and also specified the condition

#include<stdio.h>
int main ()
{
    int suman = 1;
    do
    {
        printf("THIS IS SUMAN_NAGARAJAN \n");
        suman++;
    } while (suman<10); // Now condition is true and specified  the condition
    return 0;
    
}