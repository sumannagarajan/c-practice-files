/*

// array and accessing the array

#include<stdio.h>
int main ()
{
    int a[] = {10,20,30,40,50};
    printf("%d\n",a[4]); // accessing the array
    return 0;
}

*/


/*

// changing array element

#include<stdio.h>
int main ()
{
    int b[] = {10,20,30,40,50};
    b[1]=22;
    printf("To display the changed array element b[1] : %d\n",b[1]);
    return 0;
}

*/

// looping the array
// if we want loop the array means must use forloop

/*

#include<stdio.h>
int main ()
{
    int num[] = {1,2,3,4,5,6,7,8,9,10,10,20,30,40,50};
    int i;
    for ( i = 0; i < 15; i++)
    {
        printf("value num[%d]%d\n",i,num[i]);
    }
    return 0;

}

*/

//setting the size of array

#include<stdio.h>
int main ()
{
    int x[7] = {1,2,3,4,5,6,7}; // array size is 7 int number
    int i;
    for ( i = 0; i < 7; i++)
    {
        printf("VALUE x[%d]%d\n",i,x[i]);
    }
    return 0;
    
}