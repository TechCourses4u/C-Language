/* Sample program to understand How to format output in C */
#include<stdio.h>
int main(){
    int price=30;
    printf("price is %d Rs\n",price);
    printf("price is %6d Rs\n",price);
    printf("price is %-6d Rs\n",price);
    printf("price is %1d Rs\n",price);

    float value = 5.7;
    printf("value is %f\n",value);
    printf("value is %6.3f\n",value);
    printf("value is %10.2f\n",value);

    char name[] = "Ramesh";
    printf("name is %s\n",name);
    printf("name is %20s\n",name);
    return 0;
} 

/* Output :
price is 30 Rs
price is     30 Rs
price is 30     Rs
price is 30 Rs
value is 5.700000
value is  5.700
value is       5.70
name is Ramesh
name is               Ramesh
*/
