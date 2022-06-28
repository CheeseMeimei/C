#include<stdio.h>

int main()
{
	int T;
    long long answer,a,b,c,d;
	scanf("%d",&T);
	while(T>0){
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		answer=a%1000000007*b%1000000007*c%1000000007*d%1000000007%1000000007;
		printf("%lld\n",answer);
		T--;
	}return 0;
}
