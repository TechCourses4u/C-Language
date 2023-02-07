/* Sample Program to Display contents of a file on screen* /
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;

    fp = fopen("sample.txt","r");
    if(fp == NULL) {
        printf("Cannot open file\n");
        exit(1);
    } 
    while(1) {
        ch = fgetc(fp);
        if(ch == EOF)
            break;
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}
