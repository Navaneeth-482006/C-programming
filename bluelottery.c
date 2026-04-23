// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter value in a:");
    scanf("%d",&a);
     printf("enter value in b:");
    scanf("%d",&b);
     printf("enter value in c:");
    scanf("%d",&c);
    if(a+b==10||b+c==10||a+c==10)
    {
        printf("10");
    }
    else if(a>10||b>10||c>10)
    {
        printf("5");
    }
    else
    {
        printf("0");
    }
}