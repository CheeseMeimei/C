#include<stdio.h>
#include<math.h>
int isPrime(int x);
int main()
{
	int x,ret;
	scanf("%d",&x);
	ret=isPrime(x);
	if(ret==1)
	{
		printf("%d������",x);
	}
	else
	{
		printf("%d��������",x);
	}
	return 0;
 } 
 
 int isPrime(int x)
 {
 	int i,m=sqrt(x);
 	for(i=2;i<=m;i++)
 	{
 		if(x%i==0)return 0;
	}
	return 1;
 }
