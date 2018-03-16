#include <stdio.h>
int main(void) {
	int a,b,i,k[3];
	scanf("%d %d",&a,&b);
	for(i=0;i<3;i++)
	scanf("%d",&k[i]);
	for(i=0;i<3;i++)
	{
		if(k[i]==b)
		printf("yes");
	}
	return 0;
}
