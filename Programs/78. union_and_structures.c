/* Sample program to understand mix usage of union and structures */
#include<stdio.h>
#include<string.h>
struct teacher{
    char specialization[20];
    int salary;
};
struct student{
    char father_name[20];
    int roll_no;
};

union staff{
    struct teacher t;
    struct student s;
};

struct staff_details{
    char staff_type[10];
    union staff staff;
};


int main(){
    struct staff_details temp;
    printf("Type teacher or student\n");
    scanf("%s",&temp.staff_type);
    if(!strcmp(temp.staff_type,"teacher")){
        printf("Enter specialization and salary\n");
        fflush(stdin);
        scanf("%s %d",&temp.staff.t.specialization,
                      &temp.staff.t.salary);
    }
    else {
        printf("Enter father name and roll no\n");
        fflush(stdin);
        scanf("%s %d",&temp.staff.s.father_name,
                      &temp.staff.s.roll_no);
    }

    printf("specialization : %s\n",temp.staff.t.specialization);
    printf("salary : %d\n",temp.staff.t.salary);
    printf("father name : %s\n",temp.staff.s.father_name);
    printf("roll no : %d\n",temp.staff.s.roll_no);

    return 0;
}
/* Output :
Type teacher or student
teacher
Enter specialization and salary
math
25000
specialization : math
salary : 25000
father name : math
roll no : 25000
*/
