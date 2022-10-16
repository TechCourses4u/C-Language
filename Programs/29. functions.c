/*Sample programs to understand functions:
-What is a function
	- Block of statements that perform a particular task

-Components of a function:
	Prototype Declaration    -  return type and arguments type
	Function Call            -  invoke the function
	Function Definition      -  actual block that performs a particular task

-Why use functions in program?
	- avoid rewriting the same code over and over
	- it becomes easier to write, understand and debug programs

- General Syntax : 
return_type name(parameters){
	body;
}
*/

/*1st program*/
#include<stdio.h>
int sum(int a, int b);                           
int main(){
	int res = sum(10,20);                     
	printf("sum is %d\n",res);
	return 0;
}

int sum(int a, int b){                            
	return a+b;
}

/*2nd program*/
#include<stdio.h>
int add(int a, int b){
    return a+b;
}      
float sub(float a, float b){
    return a-b;
}  
float mul(float a, int b){
    return a*b;
}  
void message();           
int main(){
    int a =10,b=20;
    float c=3.5,d=2.5;
	message();  
    printf("additon : %d\n",add(a,b));  
    printf("subtractoin : %f\n",sub(c,d)); 
    printf("multiply : %f\n",mul(c,a));                
	return 0;
}
void message(){
    printf("Learning functions\n");
}  
