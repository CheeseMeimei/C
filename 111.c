#include<stdio.h>

int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i+=2){
if(i==n||i==n-1)
printf("%d",i);
		else 
		printf("%d ",i);
	}
return 0;
}
