/*Sample program file for arithmetic operators*/
#include <stdio.h>
int main()
{
    int a = 20, b = 10, c;
    c = a + b;
    printf("a+b = %d \n", c);
    c = a - b;
    printf("a-b = %d \n", c);
    c = a * b;
    printf("a*b = %d \n", c);
    c = a / b;
    printf("a/b = %d \n", c);
    c = a % b;
    printf("a%%b = %d \n", c);
    a++; 
    printf("a++ = %d \n", a);
    a=20;
    a--;
    printf("a-- = %d \n", a);
    return 0;
}
