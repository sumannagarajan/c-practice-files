#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int roll_num;
    float percentage;
};
int main()
{
    struct student sd;
    sd.roll_num=236;
    sd.percentage=83.7;
    strcpy(sd.name,"sumannagarjan");
    printf("student rollno : %d\n",sd.roll_num);
    printf("student CGPA : %f\n",sd.percentage);
    printf("student name : %s\n",sd.name);
    return 0;
    
}