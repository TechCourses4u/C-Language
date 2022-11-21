/* Sample program to understand array vs pointer notation of strings in C */
#include<stdio.h>
int main(){
    char name[5] = "TECH";
    char *ptr = "TECH";

    printf("%s %u\n",name,name);
    printf("%s %u\n",ptr,ptr);

    printf("%c\n",name[2]);
    printf("%c\n",ptr[2]);

    //char name1[5]=name;
    char *ptr1 = ptr;
    //printf("%s\n",name);
    printf("%s %u\n",ptr1,ptr1);

    //name="NAME";
    ptr ="NAME";
    //printf("%s\n",name);
    printf("%s %u\n",ptr,ptr);
    return 0;
}
