/* Sample programs to understand ways of passing parameters/arguments to a function*/

/* Program 1 : Call by Value*/
#include<stdio.h>
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("swap: x = %d, y = %d\n",x,y);
}
int main(){
    int a = 10, b = 20;
    swap(a,b);
    printf("main: a = %d, b = %d\n",a,b);
    return 0;
}

/*Output:
swap: x = 20, y = 10
main: a = 10, b = 20
*/

/* Program 2 : Call by Reference*/
#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("swap: *x = %d, *y = %d\n",*x,*y);
}
int main(){
    int a = 10, b = 20;
    swap(&a,&b);
    printf("main: a = %d, b = %d\n",a,b);
    return 0;
}

/*Output:
swap: *x = 20, *y = 10
main: a = 20, b = 10
*/
