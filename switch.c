// switch
//insted of elseif we can go for switch statement 

// switch is like a menu based statement or system

/*

//static input 

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

*/


// dynamic input from user

#include<stdio.h>
int main()
{
    int a;
    printf("PLEASE ENTER THE NUMBER. THE ENTERED NUMBER SHOULD DISPLAY THE DAY OF THE WEEK : \n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("MONDAY \n");
        break;
    case 2:
        printf("TUESDAY \n");
        break;
    case 3:
        printf("WEDNESDAY \n");
        break;
    case 4:
        printf("THURSDAY \n");
        break;
    case 5 :
        printf("FRIDAY \n");
        break;
    case 6:
        printf("SATURDAY \n");
        break;
    case 7:
        printf("SUNDAY \n");
        break;
    default:
        printf("SORRY YOU ENTER THE OUT OF RANGE NUMBER please enter 1 to 7 numbers \n");
       break;
    }
}