#include<stdio.h>

int main()
{
	int i,n,m;
	long a[100]={0};
	scanf("%d %d",&n,&m);
	for(i=1;i<=n*m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n*m;i++)
	{
	printf("%d",a[i]);
	if (i%m==0)printf("\n");
	else printf(" ") ;
	}
	return 0;
}
