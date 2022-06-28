#include<stdio.h>

int main()
{   int T,n,a,b,answer;
    scanf("%d",&T);
    while(T--){
    	scanf("%d %d %d",&n,&a,&b);
    	answer=n*a+b;
    	if(answer>=100) printf("Yes\n");
    	else printf("No\n");
	}
	return 0;
}
