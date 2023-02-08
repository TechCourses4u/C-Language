/* Sample Programs to practice file operations in C */
/* Program 1 : Count words in file */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    int totalWords = 0;

    fp=fopen("sample.txt","r");
    if(fp == NULL) {
        printf("Cannot open source file\n");
        exit(1);
    } 
    while(1) {
        ch = fgetc(fp);
        if(ch == EOF)
            break;
        if(ch==' ' || ch=='\n')
            totalWords++;
    }
    fclose(fp);
    printf("Number of words : %d\n",totalWords);
    return 0;
}

/* Program 2 : Copy contents of one file to another file */
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fs,*ft;
   fs = fopen("sample.txt","r");
   if(fs == NULL) {
    printf("Cannot open source file\n");
    exit(1);
   } 
   ft = fopen("sampleCopy.txt","w");
   if(ft == NULL) {
    printf("Cannot open target file\n");
    fclose(fs);
    exit(2);
   }

   char ch;
   while(1) {
    ch = fgetc(fs);
    if(ch == EOF)
        break;
    else
        fputc(ch,ft);
   }
   fclose(fs);
   fclose(ft);
   return 0;
}
