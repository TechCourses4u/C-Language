/* Sample programs to understand storage classes in C.*/
/*
Theory : 
All variables have storage classes in addition to data type.
When we do not specify storage class, default is assigned based on context.
Storage Classes tells us  below things about a variable:
Storage : memory or cpu registers
Default initial value : 0 or garbage
Scope – Block / File
Life – Block / Till program ends
There are 4 storage classes in C.
1. auto - 
Syntax : auto int i;
Storage : Memory
Default : Garbage
Scope : Block
Life : Till control remains within block
2. register - 
Syntax : register int i;
Storage : CPU registers
Default : Garbage
Scope : Block
Life : Till control remains within block
3. static -
Syntax: static in i;
Storage : Memory
Default : 0
Scope : Block/Single file
Life : Till Program ends
4. extern - 
Syntax : extern int i;
Storage : Memory
Default : 0
Scope : File (all files)
Life : Till Program ends
*/

/* Program 1 : auto storage class*/
#include<stdio.h>
int main(){ 
    auto int x=20;
    printf("x : %d\n",x);
    return 0; 
}
/* Program 2 : register storage class*/
#include<stdio.h>
int main(){ 
    register int i;
    for(int i=1;i<=100;i++)
        printf("%d\n",i);
    return 0; 
}

/* Program 3 : static storage class*/
#include<stdio.h>

void f(){
    static int i=1;
    int j=1;
    i=i+2;
    j=j+2;
    printf("%d %d\n",i,j);
}
int main(){
    f();
    f();
    f();
    return 0;
}

/* Program 4 : extern storage class*/
#include<stdio.h>
extern int x;
void f(){
    printf("f : %d\n",x);
}
int main(){ 
    printf("main : %d\n",x); 
    f();
    return 0; 
}
int x=10;
