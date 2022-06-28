#include<stdio.h>

int main()
{
	int sum=0,i,a[3];
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	if(sum==2||sum==1)printf("Yes");
	else printf("No");
	return 0;
} 
