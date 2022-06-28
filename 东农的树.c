#include<stdio.h>
int main()
{
	int i,shu[500],sum,a,b,answer,max;
	for(i=1,sum=0;sum<=10000;i++){
		sum+=i;
		shu[i]=sum;
	}
	scanf("%d %d",&a,&b);
	if(b>a){
	 max=b;
	i=b-a;}
	else {
		max=a;
		i=a-b;
	}
	answer=shu[i]-max;
	printf("%d",answer);
	return 0;
}
