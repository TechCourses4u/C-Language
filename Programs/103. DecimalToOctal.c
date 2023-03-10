/* Sample program to convert decimal number to octal number in C /
#include <stdio.h>
int main()
{
    int octal[32] = {0};
    int num;
    printf("Enter decimal number : ");
    scanf("%d",&num);

    int i = 0;
    while (num > 0) {
        octal[i] = num % 8;      // store remainder
        num /= 8;
        i++;                    // i will also store len of octal
    }
    
    printf("Dec num %d in octal is ",num);
    // print in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d",octal[j]);
    return 0;
}
