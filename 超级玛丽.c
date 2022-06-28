#include<stdio.h>
int main()
{
	int x,y,a,b,cnt=0,i,j;
	scanf("%d %d %d %d",&x,&y,&a,&b);
	for(i=0;i<x;i++)
	{
		if(i==a-1||i==a+1)continue;
		for(j=0;j<y;j++)
		{
			if(j==b-1||j==b+1)continue;
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
