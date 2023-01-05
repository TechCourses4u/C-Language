/* Sample program to understand implicit and explicit type conversion in C */

#include<stdio.h>
int main(){
    // implicit type conversion
    int a=10.5;
    float b = 3;
    printf("a: %d, b: %f\n",a,b);

    // explicit type conversion
    int x = 14,y=4;
    float z;
    z = x / y;
    printf("without typecast: %f\n",z);

    z = (float)x / y;
    printf("with typecast: %f\n",z);
    return 0;
} 

/* Output :
a: 10, b: 3.000000
without typecast: 3.000000
with typecast: 3.500000
*/
