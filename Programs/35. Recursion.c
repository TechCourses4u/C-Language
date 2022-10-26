//Sample programs to understand recursion in C

//Program 1: Print 1 to 5 using recursion
#include<stdio.h>
void f(int i){
    if(i==6)
        return;
    printf("%d\n",i);
    f(i+1);
}

int main(){
    int i=1;
    f(i);
    return 0;
}

//Program 2: Print 5 to 1 using recursion
#include<stdio.h>
void f(int i){
    if(i==6)
        return;
	f(i+1);
    printf("%d\n",i);
}

int main(){
    int i=1;
    f(i);
    return 0;
}

//Program 3 : Print Hello 5 times
#include<stdio.h>
void f(int i,int n){
    if(i>n)
        return;
    printf("hello\n");
    f(i+1,n);
}

int main(){
    int i=1;
    int count=5;
    f(i,count);
    return 0;
}

//Program 4: Factorial of a number
#include<stdio.h>
int f(int i){
    if(i==1)
        return 1;
    return i * f(i-1);
}

int main(){
    int i=6;
    int factorial;
    factorial=f(i);
    printf("factorial is %d\n",factorial);
    return 0;
}
