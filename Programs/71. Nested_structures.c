/* Sample programs to understand nested sturctures i.e. structures inside structures in C*/
#include<stdio.h>
struct Phone{
    int areaCode;
    int number;
};

struct Address{
    char city[20];
    int pin;
    struct Phone p;
};

struct Student{
    char name[10];
    int marks;
    struct Address address;
};

int main(){
    struct Student st1 =
         {"ramesh", 73, "Noida", 201301, 91, 123456};

    printf("st1 name : %s\n",st1.name);
    printf("st1 marks : %d\n",st1.marks);
    printf("st1 city : %s\n",st1.address.city);
    printf("st1 pin : %d\n",st1.address.pin);
    printf("st1 areaCode : %d\n",st1.address.p.areaCode);
    printf("st1 number : %d\n",st1.address.p.number);

    st1.address.p.areaCode = 10;
    printf("\nst1 new areaCode : %d\n",st1.address.p.areaCode);


    return 0;
}
