#include<stdio.h>
int main()
{
int a,b=0,c;
scanf("%d",&a);
while(a!=0)
{
  a=a%10;
  c=a/10;
  b++;
  }
  printf("%d",b);
  return 0;
  }
