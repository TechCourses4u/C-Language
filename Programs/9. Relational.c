/*Sample program file for relational operators */
#include <stdio.h>
int main()
{
    int a = 20, b = 10,c=20;
    printf("%d == %d -> %d \n", a, b, a == b); 
    printf("%d != %d -> %d \n", a, b, a != b);
    printf("%d > %d -> %d \n", a, c, a > c); 
    printf("%d >= %d -> %d \n", a, c, a >= c); 
    printf("%d < %d -> %d \n", a, b, a < b); 
    printf("%d <= %d -> %d \n", a, c, a <= c);
    return 0;
}
