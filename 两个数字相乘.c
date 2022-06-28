#include<stdio.h>

int main()
{
	int T,a,b;
	long answer;
	scanf("%d",&T);
	while(T>0){
		scanf("%d %d",&a,&b);
		answer=a*b;
		printf("%ld\n",answer);
	    T--;
		}
	return 0;
}

