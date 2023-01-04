/* Sample program to understand typedef in C */
/* Typedef are used to rename data types */

#include<stdio.h>
typedef struct student{
    char name[20];
    int roll_no;
    int age;
}STUDENT;

int main(){
    STUDENT st1 = {"rahul",300,25};
    printf("Name : %s\n",st1.name);
    printf("Roll No : %d\n",st1.roll_no);
    printf("Age : %d\n",st1.age);
    return 0;
}
