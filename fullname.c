//full name user input
#include<stdio.h>
int main()
{
    char full_name[50];
    printf("PLEASE ENTER THE FULL NAME : \n");
    fgets(full_name,sizeof(full_name),stdin);
    printf("HAPPY MORNING %s\n",full_name);
    return 0;
}