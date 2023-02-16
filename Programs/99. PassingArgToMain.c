/* File copy program using main arguments */
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    FILE *fs, *ft;
    char ch;
    if(argc != 3){
        printf("Incorrect no of arguments\n");
        exit(1);
    }

    printf("%d %s %s %s\n",argc,argv[0],argv[1],argv[2]);
    
    fs = fopen(argv[1],"r");
    if(fs == NULL){
        printf("Source File not opened\n");
        exit(2);
    }

    ft = fopen(argv[2],"w");
    if(ft == NULL){
        printf("Target File not opened\n");
        exit(3);
    }

    while((ch = fgetc(fs)) != EOF)
        fputc(ch,ft);
    
    fclose(fs);
    fclose(ft);
    return 0;
}
