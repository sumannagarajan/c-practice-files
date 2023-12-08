//user defined data type

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
    struct student s;
    
    //static ini

    sd.roll_num=236; 
    sd.percentage=83.7; 
    strcpy(sd.name,"sumannagarjan"); 
    printf("student rollno : %d\n",sd.roll_num);
    printf("student CGPA : %f\n",sd.percentage);
    printf("student name : %s\n\n",sd.name);

    //dynamic ini (or) get user input

    s.name;
    s.roll_num;
    s.percentage;
    printf("please enter 2nd student details name,rollno,percentage :  \n");
    fgets(s.name,sizeof(s.name),stdin);
    scanf("%d",&s.roll_num);
    scanf("%f",&s.percentage);
    printf("student name : %s\n",s.name);
    printf("student rollno : %d\n",s.roll_num);
    printf("student CGPA : %0.1f\n",s.percentage);

    return 0;
    
}