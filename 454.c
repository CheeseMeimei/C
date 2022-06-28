#include<stdio.h>
int main()
{
		int i,n,t,x=0;
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		x=x*10+t%10;
		t=t/10;
	}
	if(n==x)
	{
		printf("yes");
	}
	else printf("no");
	return 0;
}
