/* Sample program to understand sizeof operator in C
- sizeof computes the size of its operand in bytes.
- Its return type is usually denoted by size_t
- In some compiler size_t is unsigned int.  In others, it is unsigned long.
  Eg: typedef unsigned int size_t;
- Syntax : sizeof(operand) 
*/
#include<stdio.h>
int main(){
    float x=10.0;
    printf("char : %u bytes\n",sizeof(char));
    printf("int : %u bytes\n",sizeof(int));
    printf("float : %u bytes\n",sizeof(float));
    printf("double : %u bytes\n",sizeof(double));
    printf("pointer : %u bytes\n",sizeof(int *));
    printf("size of variable x : %u bytes\n",sizeof(x));
    printf("expressoin : %u bytes \n",sizeof(x=x+4.0));
    printf("value of x : %lf bytes\n",x);
    return 0;
}

/* Output on 64 bit compiler :
char : 1 bytes
int : 4 bytes
float : 4 bytes
double : 8 bytes
pointer : 8 bytes
size of variable x : 4 bytes
expressoin : 4 bytes 
value of x : 10.000000 bytes
*/
