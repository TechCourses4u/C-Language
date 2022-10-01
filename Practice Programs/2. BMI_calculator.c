/*Sample program for BMI value mapping to category*/
#include <stdio.h>
int main()
{
    float BMI;
    printf("Enter BMI: ");
    scanf("%f",&BMI);
    if(BMI<=18.5){
        printf("Underweight\n");
    } else if(BMI>18.5 && BMI<25){
        printf("Ideal\n");
    } else if(BMI>=25 && BMI<30){
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }
    return 0;
}
