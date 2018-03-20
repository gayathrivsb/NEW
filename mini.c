#include<stdio.h>
int main()
{
int a[50],min,n,i,position=1;
scanf("%d%d",&n,&a[i]);
min=a[0];
for(i=1;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
position=i+1;
}
}
printf("the minimum is %d",min);
return 0;
}
