// switch
//insted of elseif we can go for switch statement 

// switch is like a menu based statement or system



#include<stdio.h>
int main ()
{
    int a=5;
    int b=10;
    int c=2;
    switch (a)
    {
    case 1:
        printf("TO PERFORM THE ADD OPERATION %d\n",b+c);
        break;
    case 2:
        printf("TO PERFORM THE MUL OPERATION %d\n",b*c);
        break;
    case 3:
        printf("TO PERFORM DIV OPERATION %d\n",b/c);
        break;
    case 4:
        printf("TO PERFORM MODULO OPERATOR %d\n",b%c);
        break;
    case 5:
        printf("TO PERFORM THE SUB OPERATION %d\n",b-c);
        break;
    default:
        printf( "ERROR!!! YOU ENTER ABOVE THE VALUE OF 5 ......\n");
    }
    return 0;
}