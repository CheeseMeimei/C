#include<stdio.h>
//9 3 4 2 5 7 гн1 
int main()
{
	long long n;
	int a,b;
	a=0,b=0;
	scanf("%lld",&n);
	do{
	    
		if(n%2==0)
			a++;
		else b++;
	scanf("%lld",&n); 
	} 
	while(n!=-1);
	printf("%d %d",b,a);
	return 0;
 } 
