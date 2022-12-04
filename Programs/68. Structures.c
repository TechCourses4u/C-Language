/* Sample program to understand structures in C */

#include<stdio.h>
int main(){
    struct Student{
        char name[10];
        int marks;
    };
    struct Student st1 = {"ramesh",73};
    struct Student st2 = {"suresh",85};
    struct Student st3 = {0};
    struct Student st4 = {"varun"};

    printf("%s %d\n",st1.name,st1.marks);
    printf("%s %d\n",st2.name,st2.marks);
    printf("%s %d\n",st3.name,st3.marks);
    printf("%s %d\n",st4.name,st4.marks);
    return 0;
}
