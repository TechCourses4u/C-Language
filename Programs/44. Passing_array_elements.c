/* Sample program to understand how to pass array elements to function by below 2 ways
1. by value - f1
2. by reference - f2
*/

#include<stdio.h>
void f1(int num){
    printf("%d\t",num);
}
void f2(int *num){
    printf("%d\n",*num);
}
int main(){
    int marks[] = {30,35,25,40,45,17,39,40,50,47};
    int n=sizeof(marks)/sizeof(marks[0]);
    for(int i=0;i<n;i++){
        f1(marks[i]);
        f2(&marks[i]);
    }
    return 0;
}
