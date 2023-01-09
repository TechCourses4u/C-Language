/* Sample program to understand pre and post increment operator in C */
#include<stdio.h>
int main(){
    int x = 10;
    int y = ++x;
    printf("x: %d, y: %d\n",x,y);
    
    int a = 10;
    int b = a++;
    printf("a: %d, b: %d\n",a,b);
    return 0;
} 
/* Output :
x: 11, y: 11
a: 11, b: 10
*/

/* C code to assembly language website link :
https://godbolt.org/
*/
