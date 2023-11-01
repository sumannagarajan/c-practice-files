/*

//break 
// is used to break the statement and jump out of the loop

#include<stdio.h>
int main ()
{
    int x;
    for(x=0;x<10;x++)
    {
        if (x==5)
        {
        break;
        }
        printf("%d\n",x);
        
    }
    return 0;
} 

*/

 // continue


#include<stdio.h>
int main ()
{
    int y;
    for(y=0;y<10;y++)
    {
        if (y==5)
        {
        continue;;
        }
        printf("%d\n",y);
    }
    return 0;
}