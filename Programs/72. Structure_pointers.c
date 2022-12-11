/* Sample programs to understand structure pointers in C */
/* Program 1 : Structure pointer notation */
#include<stdio.h>
struct Student{
    char name[10];
    int marks;
};

int main(){
    struct Student st1 = {"ramesh", 73};
    struct Student *ptr = &st1;
    printf("name : %s, marks : %d\n",st1.name,st1.marks);
    printf("name : %s, marks : %d\n",ptr->name,ptr->marks);
    return 0;
}

/* Program 2 : Structure pointer inside structure */
#include<stdio.h>
struct Student{
    char name[10];
    int marks;
    struct Student* next;
};

int main(){
    struct Student st1 = {"ramesh", 73};
    struct Student st2 = {"suresh", 85};
    st1.next = &st2;
    printf("st2 name : %s %s\n",st2.name,st1.next->name);
    printf("st2 marks : %d %d\n",st2.marks,st1.next->marks);
    return 0;
}

/* Program 3 : We cannot declare same structure variable inside structure */
#include<stdio.h>
struct Student{
    char name[10];
    int marks;
    struct Student next;      // Invalid -> will give compile error
};

int main(){
    struct Student st1 = {"ramesh", 73};
    struct Student st2 = {"suresh", 85};
    st1.next = st2;
    printf("st2 name : %s %s\n",st2.name,st1.next.name);
    printf("st2 marks : %d %d\n",st2.marks,st1.next.marks);
    return 0;
}
