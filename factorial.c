// Online C compiler to run C program online
#include <stdio.h>
int main() {
  int fact=1;
  int n;
  printf("enter the number:\n");
  scanf("%d",&n);
  for(int i=n;i>=1;i--)
  {
      fact=fact*i;
  }
  printf("factorial of%d is: %d\n",n,fact);
  return 0;
}