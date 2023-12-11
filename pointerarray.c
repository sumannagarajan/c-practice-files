#include<stdio.h>
int main()
{
    int my_num[5] = {1,2,3,4,5 };
    int i;
  
       printf("To print the address of 1st element in my_num variable %p\n",&my_num[0]);
       printf("To print the address of the variable my_num : %p\n",&my_num);
       printf("%d\n",*my_num); // 1st element of an array
       printf("%d\n",*(my_num +1)); // 2nd element of an array
       printf("%d\n",*(my_num +2)); // 3rd element of an array
    return 0;
}