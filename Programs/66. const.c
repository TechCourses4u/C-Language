/* Sample programs to understand const keyword in C*/

/* Adding const to variable declaration */
#include<stdio.h>
int main(){
    const float pi=3.14;                 //pi is a constant and its value cannot be changed
    printf("pi value is %f\n",pi);

    //pi=3.1415;
    //printf("pi value is %f\n",pi);
    return 0;
}
