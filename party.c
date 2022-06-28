#include<stdio.h>

int main()
{
	int T,i,a[15]={0},cnt;
	long sum;
	double answer;
	cnt=0;sum=0;
	scanf("%d",&T); 
	while(T--){
		for(i=1;i<=15;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
			cnt++;
		}
			answer=1.0*sum/cnt;
		printf("%.2lf",answer);
	}
	return 0;
}
