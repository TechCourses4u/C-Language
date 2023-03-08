/* Sample program to convert a given number and base to decimal number */
#include<stdio.h>
int main(){
    char num[20];
    int base;
    printf("Eneter num and base :\n");
    scanf("%s %d",num,&base);

    //find length of number
    int len = 0;
    while(num[len]!='\0')
        len++;
        
    //convert to decimal
    int decVal=0;
    int multiplier = 1;
    for(int i=len-1;i>=0;i--){
        decVal += (num[i]-'0') * multiplier;
        multiplier*=base;
    }
    printf("num : %s, base : %d in deciaml is %d\n",num,base,decVal);
    return 0;
}
