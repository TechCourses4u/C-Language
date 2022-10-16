/* Sample program to learn how to write menu driven programs in C.
This program will give user below options:
1. Even/Odd check
2. Prime number check
3. Get Absolute value
4. Find Square of a number
Based on user choice, particular task is performed.
*/

#include<stdio.h>
void even_odd(){
    int num;
    printf("Enter number to check even/odd\n");
    scanf("%d",&num);
    if(num%2)
        printf("odd number\n");
    else
        printf("even number\n");
}

void prime(){
    int num;
    printf("Enter number to check prime or not\n");
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i == 0){
            printf("not a prime number\n");
            return;
        }        
    }
    printf("Yes,it is a prime number\n");
}

void absolute(){
    int num;
    printf("Enter number to check prime or not\n");
    scanf("%d",&num);
    if(num<0)
        num=-num;
    printf("Absolute value is %d\n",num);
}

void square(){
    int num;
    printf("Enter number to find square\n");
    scanf("%d",&num);
    printf("square of %d is %d\n",num,num*num);
} 

int main(){
    int choice=1;
    char play_again='y';
    do{
        printf("Please choose from below options:\n");
        printf("1. Even/Odd check\n");
        printf("2. Prime number check\n");
        printf("3. Get Absolute value\n");
        printf("4. Find Square of a number\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                even_odd();
                break;
            case 2:
                prime();
                break;
            case 3:
                absolute();
                break;
            case 4:
                square();
                break;
            default:
                printf("Invalid option chosen\n");
        }
        fflush(stdin);
        printf("Do you want to choose again\n");
        scanf("%c",&play_again);
    } while(play_again=='y');            
	return 0;
}
