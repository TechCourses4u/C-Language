/* Sample program to understand bit manipulations in C */
#include<stdio.h>
int main(){
    int num;
    int result;
    int mask;
    //Set bit to 1
    num = 205;               //11001101
    mask = 1<<5;             //00100000
    result = num | mask;     //11101101  --> 237
    printf("result after setting 5th bit as 1 : %d\n",result);

    //Set bit to 0
    num = 205;               //11001101
    mask = ~(1<<2);          //11111011
    result = num & mask;     //11001001  --> 201
    printf("result after setting 2nd bit as 0 : %d\n",result);

    //Check bit 0 or 1
    num = 205;               //11001101
    mask = 1<<5;             //00100000
    result = num & mask;     //00000000  --> 0
    if(result == 0)
        printf("5th bit of %d is 0\n",num);
    else
        printf("5th bit of %d is 1\n",num);

    num = 205;               //11001101
    mask = 1<<2;             //00000100
    result = num & mask;     //00000100  --> 4
    if(result == 0)
        printf("2nd bit of %d is 0\n",num);
    else
        printf("2nd bit of %d is 1\n",num);

    //flip bit - 0 to 1 and 1 to 0
    num = 205;               //11001101
    mask = 1<<5;             //00100000
    result = num ^ mask;     //11101101  --> 237
    printf("result after flipping 5th bit is : %d\n",result);

    num = 205;               //11001101
    mask = 1<<2;             //00000100
    result = num ^ mask;     //11001001  --> 201
    printf("result after flipping 2nd bit is : %d\n",result);

    // Set a range of bits (l,r) to 1
    int l = 5;
    int r = 2;
    num = 205;                                  //11001101
    mask = ((1<<(l+1))-1) ^ ((1<<r)-1);         //00111100
    result = num | mask;                        //11111101  --> 253
    printf("result after setting bit(%d,%d) to 1 is : %d\n",
                                                l,r,result);

    // Set a range of bits (l,r) to 0
    l = 5;
    r = 2;
    num = 205;                                  //11001101
    mask = ~(((1<<(l+1))-1) ^ ((1<<r)-1));      //11000011
    result = num & mask;                        //11000001  --> 193
    printf("result after setting bit(%d,%d) to 0 is : %d\n",
                                                l,r,result);

    return 0;
}
