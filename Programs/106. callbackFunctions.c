/* Sample program to understand callback functions in C */
#include<stdio.h>

int add (int a, int b){ return a+b; }
int sub (int a, int b){ return a-b; }

// Function to which fptr is pointing (add or sub) is known as callback function.
// For simplicity, we can also say fptr has a callback function
int f (int (*fptr) (int,int), int x){	
	printf("x is %d\n",x);
	int result = fptr(10,20);		//callback to add or sub
	printf("result is %d\n",result);
}

int main(){
    // Assign address of add function to fun pointer
    int (*fun) (int,int) = add;		
    f(fun,500);         // function pointer and an int value passed

    // Assign address of sub function to fun pointer
    fun = sub;		
    f(fun,600);         // function pointer and an int value passed

    return 0;
}
