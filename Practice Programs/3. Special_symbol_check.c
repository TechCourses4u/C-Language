/*Sample program to check if character entered through keyboard is a special character or not
Special character range - 0-47,58-64,91-96,123-127
*/
#include <stdio.h>
int main()
{
    char c;
    printf("Enter character: ");
    scanf("%c",&c);
    if((c>=0 && c<=47) || (c>=58 && c<=64) || (c>=91 && c<=96) || (c>=123 && c<=127)){
        printf("char: %c => ASCII: %d is a Special Symbol \n",c,c);
    } else {
        printf("char: %c => ASCII: %d is not a Special Symbol\n",c,c);
    }
    return 0;
}
