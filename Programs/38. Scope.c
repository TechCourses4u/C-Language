/* Sample Program to understand scope rules in C.
Scope means area under which variable declaration has an effect.
There are 4 scope rules in C:
File Scope - Visible to all functions
Block Scope - Visible only within and all inner blocks
Function Scope - Applicable only to goto labels. Both goto and its label must be in same function.
Prototype Scope - Visible only inside function prototype. Doesn’t include even function definition.
*/

#include<stdio.h>
int x = 10;               //File
void f(int i);            //Prototype
int main(){ 
    int  y = 20;           //Block
    {
        int z = 30;        //Block
        printf("inner block : %d\n",z); 
        printf("outer block : %d\n",y);
        goto label;        //Function
    }
    label:                 //Function
    printf("outer block : %d\n",y);
    f(10);
    return 0; 
}
void f(int j){
    printf("f : %d\n",x);
}
