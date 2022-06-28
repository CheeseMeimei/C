#include<stdio.h>

int main()
{
	long long n,x,i,max,min;
	scanf("%lld",&n);
	for(max=0,min=10^9,i=1;i<=n;i++)
	{
		scanf("%lld",&x);
		if(x>max)
			max=x;
		if(x<min)
		min=x;
	}
	printf("%lld %lld",max,min);
	return 0;
 } 
