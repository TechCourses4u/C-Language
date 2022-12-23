/* Sample program to understand enums in C */
#include<stdio.h>
int main(){
    enum branch_type{
        CS, IT, MECH, ELECTRONICS
    };
    struct student{
        char name[20];
        int roll_no;
        int age;
        enum branch_type branch; 
    };
    struct student st1 = {"rahul",300,25,IT};
    printf("Name : %s\n",st1.name);
    printf("Roll No : %d\n",st1.roll_no);
    printf("Age : %d\n",st1.age);
    printf("Branch : %d\n",st1.branch);

    if(st1.branch == CS)
        printf("CS branch\n");
    else
        printf("Non CS branch\n");
    return 0;
}
