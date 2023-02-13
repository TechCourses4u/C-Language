/* Sample program to understand how we can detect and handle errors during read write operations in C */
#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *fp; 
    fp = fopen("sample.txt","w");
    if(fp==NULL) {
        puts("Cannot open file");
        exit(1);
    }

    char ch;
    while(feof(fp) != 1){
        ch = fgetc(fp);
        if(ferror(fp)){
            perror("Error in reading");
            break;
        }
        else
            printf("%c",ch);
    }
    fclose(fp);
    return 0;
}
