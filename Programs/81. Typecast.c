/* Sample program to understand typecasting in C */
#include<stdio.h>

int main(){
    int x = 14,y=4;
    float z;
    z = x / y;
    printf("without typecast: %f\n",z);

    z = (float)x / y;
    printf("with typecast: %f\n",z);

    z = x/y;
    printf("without typecast: %f\n",z);
    return 0;
} 

/* Output :
without typecast: 3.000000
with typecast: 3.500000
without typecast: 3.000000
*/
