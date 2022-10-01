/*Sample program for BMI value mapping to category as per below rule
    <=18.5 -> underweight
    18.6 to 24.9 -> Ideal
    25 to 29.9 -> Overweight
    >=30 -> Obese
*/
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
