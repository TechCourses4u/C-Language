/* Sample program to understand fgets and fputs in C */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fs,*ft;
    char str[100];

    fs=fopen("sample.txt","r");
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
    int lines = 0;
    while(fgets(str,100,fs)!=NULL) {
        lines++;
        printf("%s",str);
        fputs(str,ft);
    }
    printf("total lines copied : %d\n",lines);
    fclose(fs);
    fclose(ft);
    return 0;
}
