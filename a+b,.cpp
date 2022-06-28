#include<stdio.h>

int main()
{
	int T;
	long a,b,c,d;
	long long answer;
	scanf("%d",&T);
	while(T>0){
		scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
		answer=(a*b*c*d)%1000000007;
		printf("%lld\n",answer);
		T--;
	}
	return 0;
 } 
