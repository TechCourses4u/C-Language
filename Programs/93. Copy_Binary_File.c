/* Sample program to copy Binary file in C */
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fs,*ft;
   fs = fopen("a.exe","rb");
   if(fs == NULL) {
    printf("Cannot open source file\n");
    exit(1);
   } 
   ft = fopen("b.exe","wb");
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
