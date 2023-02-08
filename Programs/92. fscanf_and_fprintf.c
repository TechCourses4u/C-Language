/* Sample program to understand fscanf and fprintf in C */
#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[20];
    int age;
};

int main()
{
    struct student st;
    //fprintf example : write structure to file
    FILE *fp;
    fp=fopen("student.txt","w");
    if(fp == NULL) {
        printf("Cannot open file\n");
        exit(1);
    }

    char moreData = 'y';
    while(moreData=='y'){
        printf("Enter student name and age\n");
        fflush(stdin);
        scanf("%s %d",st.name,&st.age);
        fprintf(fp,"%s %d\n",st.name,st.age);

        printf("More data (y/n) : ");
        fflush(stdin);
        scanf("%c",&moreData);
    } 
    fclose(fp);

    //fscanf example : read data from file into structure
    fp = fopen("student.txt","r");
    if(fp == NULL) {
        printf("Cannot open file\n");
        exit(2);
    }
    printf("\nData read from file :\n");
    while(fscanf(fp,"%s %d",st.name,&st.age)!=EOF){
        printf("%s %d\n",st.name,st.age);
    }
    fclose(fp);
    return 0;
}
