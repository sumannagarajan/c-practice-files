// if else if 

#include<stdio.h>
int main ()
{
    int time = 5;
    if (time==10) // cond.1
    {
        printf("now time is 10:00 AM  Pleasant morning ***** HAVE A GREAT DAY *****\n");
    }
    else if (time<3) //cond.2
    {
        printf("hey man GOOD NOON go head\n");
    }
    else
    {
        printf("Now time is 5:00 PM \n\n ***** GOOD EVENING *****\n");
    }
    return 0;

    
}