#include<stdio.h>

int main()
{
	short T;
	int r,a,b,c;
	scanf("%d",&T);
	while(T)
	{
		scanf("%d %d %d %d",&r,&a,&b,&c);
		if(2*r<=a&&2*r<=b&&2*r<=c)
		printf("%Yes\n");
		else 
		printf("No\n");
	}
	return 0;
}
