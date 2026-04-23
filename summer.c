// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int temp;
    printf("enter the temp:\n");
    scanf("%d",&temp);
    int summer;
     printf("enter 1 for summer and 0 for not_summer:\n");
    scanf("%d",&summer);
    if(summer==1)
    {
      if(temp>=60&&temp<=100)
      {
          printf("true");
      }
      else
      {
          printf("false");
      }
    }
    else
    {
        if(temp>=60&&temp<=90)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
}
    