/* Sample program to understand how to return multiple values from a function using call by reference */
#include<stdio.h>
void square_and_cube(int x,int* square,int* cube){
    *square = x*x;
    *cube = x*x*x;
}

int main(){
    int a = 10;
    int square,cube;
    square_and_cube(a,&square,&cube);
    printf("square of %d is %d\n",a,square);
    printf("cube of %d is %d\n",a,cube);
    return 0;
}
