#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	while(x!=-1/*EOF(-1)*/){
		printf("%d\n",x);
		scanf("%d",&x);		
	}
	return 0;
 } 
