/* Sample program to understand Arithmetic operations on binary numebrs in C */
#include <stdio.h>
void decimalToBinary(int num){
    printf("%d :\t",num);
    int binary[32] = {0};
    int i = 0;
    while (num > 0) {
        binary[i] = num % 2;      // store remainder
        num /= 2;
        i++;                    // i will also store len of binary
    }
    // print in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d",binary[j]);
    printf("\n");
}

int main()
{
    // Addition
    
    int num1 = 103;                //  1100111
    int num2 = 85;                 //  1010101
    int result = num1 + num2;      // 10111100
    printf("Additon : \n");
    decimalToBinary(num1);
    decimalToBinary(num2);
    printf("****************\n");
    decimalToBinary(result);
    printf("\n");
    
    //Subtraction
    num1 = 98;                     // 1100010  
    num2 = 61;                     //  111101
    result = num1 - num2;          //  100101
    printf("Subtraction : \n");
    decimalToBinary(num1);
    decimalToBinary(num2);
    printf("****************\n");    
    decimalToBinary(result);

    return 0;
}
