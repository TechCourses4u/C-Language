/* Sample program to understand how to copy one structure to another structure in C */
#include<stdio.h>
struct Student{
    char name[10];
    int marks;
};

int main(){
    struct Student st1 = {"ramesh", 73};
    struct Student st2 = st1;
    printf("st1:\n name:%s, marks:%d\n",st1.name,st1.marks);
    printf("st2:\n name:%s, marks:%d\n",st2.name,st2.marks);
    return 0;
}
