#include<stdio.h>

int main()
{
	int a,b,i,n;
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++){
		for(n=1;n<=b;n++)
		printf("*");
		printf("\n");
	}
	return 0;
}
