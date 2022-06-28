#include<stdio.h>

int main()
{
	int T;
	long long n,answer;
	scanf("%d",&T);
	while(T>0){
		scanf("%lld",&n);
		answer=n*n;
	    T--;
		printf("%lld\n",answer);
	}
	return 0;
}
