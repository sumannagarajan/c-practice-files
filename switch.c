// switch
//insted of elseif we can go for switch statement 

// switch is like a menu based statement or system


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