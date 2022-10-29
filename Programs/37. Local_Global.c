/* Sample Program to understand local and global variables in C.
Local Variables -
Declared inside a function or block.
Accessible only to statements inside that function or block.
No default value.
Declared and initialized at same place

Global Variables - 
Global variables are defined outside functions.
Can be accessed from any function.
Default value is 0.
Can be declared separately from its initialization using extern keyword.
*/

#include<stdio.h>
int x = 10;
void f(){
    printf("f : %d\n",x);
}
int main(){ 
    int x=20;
    {
        int x=30;
        printf("inner block : %d\n",x);
        f();  
    }
    printf("outer block : %d\n",x);
    f(); 
    return 0; 
}
