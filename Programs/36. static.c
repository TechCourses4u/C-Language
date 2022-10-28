/* Sample programs to understand static keyword in C 
- static keyword is used when we need value of variable to persist between function calls.
- Syntax : static int i;
- Static variable is initialized only once.
- Default value for static variable is 0.
*/

/* Program 1 : static variable usage inside functions*/
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

/* Output : 
3 3
5 3
7 3
*/


/* Program 2 : static variable usage outside functions*/
#include<stdio.h>
static int i;
void add(){
    i=i+2;
    printf("add: %d\n",i);
}
void sub(){
    i=i-2;
    printf("sub: %d\n",i);
}
int main(){
    printf("main: %d\n",i);
    add();
    add();
    sub();
    return 0;
}

/* Output:
main: 0
add: 2
add: 4
sub: 2
*/
