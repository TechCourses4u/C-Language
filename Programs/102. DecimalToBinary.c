/* Sample program to convert decimal to binary in C */
#include <stdio.h>
int main()
{
    int binary[32] = {0};
    int num;
    printf("Enter decimal number : ");
    scanf("%d",&num);

    int i = 0;
    while (num > 0) {
        binary[i] = num % 2;      // store remainder
        num /= 2;
        i++;                    // i will also store len of binary
    }
    
    printf("Dec num %d in binary is ",num);
    // print in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d",binary[j]);
    return 0;
}
