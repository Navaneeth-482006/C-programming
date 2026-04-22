#include <stdio.h>

void main() 
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    int res=(ch>='a')&&(ch<='z');
    printf("%c is a lower case alphabets i.e is %d",res,ch);
}
