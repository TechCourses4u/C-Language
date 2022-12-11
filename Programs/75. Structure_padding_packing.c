/* Sample programs to understand structure padding and packing in C */
/* Program 1 : Structure padding */
#include<stdio.h>
struct struct1{
    char x;
    short int y;
};
struct struct2{
    char x;
    short int y;
    int z;
};
struct struct3{
    char x;
    int y;
    double z;
};
struct struct4{
    char x;
    double y;
    int z;
};
struct struct5{
    double x;
    int y;
    char z;
};

int main(){
    printf("struct1 : %d\n",sizeof(struct struct1));
    printf("struct2 : %d\n",sizeof(struct struct2));
    printf("struct3 : %d\n",sizeof(struct struct3));
    printf("struct4 : %d\n",sizeof(struct struct4));
    printf("struct5 : %d\n",sizeof(struct struct5));

    return 0;
}

/* Output : 
struct1 : 4
struct2 : 8
struct3 : 16
struct4 : 24
struct5 : 16
*/

/* Program 2 : Structure packing */
#include<stdio.h>
#pragma pack(1)
struct struct1{
    char x;
    short int y;
};
struct struct2{
    char x;
    short int y;
    int z;
};
struct struct3{
    char x;
    int y;
    double z;
};
#pragma pack()

struct struct4{
    char x;
    int y;
    double z;
};

int main(){
    printf("struct1 : %d\n",sizeof(struct struct1));
    printf("struct2 : %d\n",sizeof(struct struct2));
    printf("struct3 : %d\n",sizeof(struct struct3));
    printf("struct4 : %d\n",sizeof(struct struct4));

    return 0;
}

/*Output:
struct1 : 3
struct2 : 7
struct3 : 13
struct4 : 16
*/
