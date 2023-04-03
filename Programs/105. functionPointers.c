/* Sample program to understand function pointers in C */
#include<stdio.h>

int add (int a, int b){
    return a+b;
}
int sub (int a, int b){
    return a-b; 
}
int main(){
    // Assign address of add function to fun pointer
    int (*fun) (int,int) = add;		
    int addition = fun(10,10);		// 20, add function called
    printf("Addition : %d\n",addition);

    // Assign address of sub function to fun pointer
    fun = sub;					
    int subtraction = fun(10,10);	// 0, sub function called
    printf("Subtraction : %d\n",subtraction);

    return 0;
}
