/*Sample program to understand logical operators better*/
#include <stdio.h>
int main()
{
    int a = 10;
    printf("1st:\n");
    printf("%d \n", (a==10) && printf("hello\n"));
    printf("2nd:\n");
    printf("%d \n", (a==20) && printf("hello\n"));
    printf("3rd:\n");
    printf("%d \n", (a==10) || printf("hello\n"));
    printf("4th:\n");
    printf("%d \n", (a==20) || printf("hello\n"));
    return 0;
}
