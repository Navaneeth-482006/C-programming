// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int count=0;
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    while(num!=0)
    {
        int dig=num%10;
        if((dig%2)!=0)
        {
            count++;
        }
         num = num / 10;  
    }
    printf("there are %d odd digits",count);
    return 0;
}