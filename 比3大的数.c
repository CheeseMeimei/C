#include<stdio.h>

int main()
{
	int a,k,i,n,b;
	scanf("%d %d",&n,&k);
	for(i=1,b=0;i<=n;i++)
	{
		scanf("%d",&a);
		if(a>k)
		b++;
		}
		printf("%d",b);
	return 0;
 } 
