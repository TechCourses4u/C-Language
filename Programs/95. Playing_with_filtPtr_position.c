/* Sample program to understand fseek, rewind and ftell functions in C */
#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *fp; 
    fp = fopen("sample.txt","r");
    if(fp==NULL) {
        puts("Cannot open file");
        exit(1);
    }
    int position;
    char ch;
    fseek(fp,0,SEEK_SET);
    position = ftell(fp);
    ch = fgetc(fp);
    printf("char at position %d is %c\n",position,ch);

    fseek(fp,-1,SEEK_END);
    position = ftell(fp);
    ch = fgetc(fp);
    printf("char at position %d is %c\n",position,ch);

    fseek(fp,5,SEEK_SET);
    position = ftell(fp);
    ch = fgetc(fp);
    printf("char at position %d is %c\n",position,ch);
    
    fseek(fp,0,SEEK_CUR);
    position = ftell(fp);
    ch = fgetc(fp);
    printf("char at location %d is %c\n",position,ch);

    rewind(fp);
    position = ftell(fp);
    ch = fgetc(fp);
    printf("char at location %d is %c\n",position,ch);
    
    fclose(fp);
    return 0;
}
