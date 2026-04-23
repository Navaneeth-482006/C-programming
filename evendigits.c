// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int sum=0;
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    while(sum!=0)
    {
        int dig=num%10;
        if(dig%2==0)
        {
            sum=sum+dig;
        }
    }
    printf("sum of even digits:%d",sum);
    return 0;
}