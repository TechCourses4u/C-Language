/* Sample programs to understand how to pass structure to functions in C */
/* Program 1 : Passing individual Elements */
#include<stdio.h>
struct Student{
    char name[10];
    int marks;
};

void func(char name[10],int marks){
    printf("name:%s, marks:%d\n",name,marks);
}

int main(){
    struct Student st1 = {"ramesh", 73};
    func(st1.name,st1.marks);
    return 0;
}

/*Program 2 : Passing whole structure by value and by reference */
#include<stdio.h>
struct Student{
    char name[10];
    int marks;
};

void func(struct Student student){
    printf("func : name:%s, marks:%d\n",
            student.name,student.marks);
    student.marks=90;
}

void func1(struct Student *ptr){
    printf("func1 : name:%s, marks:%d\n",
            ptr->name,ptr->marks);
    ptr->marks=100;
}

int main(){
    struct Student st1 = {"ramesh", 73};
    func(st1);
    printf("main : name:%s, marks:%d\n",st1.name,st1.marks);
    func1(&st1);
    printf("main : name:%s, marks:%d\n",st1.name,st1.marks);
    return 0;
}
