/* Sample programs to understand Designated Initialization of structures */

/* Program 1: Designated initializatoin of structures */
#include<stdio.h>
struct person{
    int age;
    int salary;
};
int main(){
    struct person p1={.salary = 10000, .age = 10};
    struct person p2={.salary = 15000};
    printf("p1 age : %d, salary : %d\n",p1.age,p1.salary);
    printf("p2 age : %d, salary : %d\n",p2.age,p2.salary);
    return 0;
}

/* Program 2: Designated initialization of array of structures */
#include<stdio.h>
struct person{
    int age;
    int salary;
};
int main(){
    struct person persons[5]={[1].age=10,
                              [1].salary=10000,[4].age=10};
    for(int i=0;i<5;i++){
        printf("%d : age: %d, salary: %d\n",
        i,persons[i].age,persons[i].salary);
    }
    return 0;
}
