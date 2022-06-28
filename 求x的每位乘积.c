#include<stdio.h>
#include<math.h> 
int main()
{
	long long x;
	int a,sum;
	sum=1;
	scanf("%lld",&x);
	/*t=x;
	
	sum=t%10;
	if(x>0){
		x=x/10;
		a=x%10;
	
		if(a==0)
		;
	}*/
	while(x>0){
		a=x%10;
		x=x/10;
		sum=sum*a;
	} 
	printf("%lld",sum);
	return 0;
}
