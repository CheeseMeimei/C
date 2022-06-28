#include<stdio.h>
//9 3 4 2 5 7 гн1 
int main()
{	int a,b,n;
	a=0,b=0;
	scanf("%d",&n);
	while(n!=1);{
	     if(n%2==0)
			a++;
		else b++;
		scanf("%d",&n);
	}
	printf("%d %d",b,a);
	return 0;
 }
