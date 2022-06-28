#include<stdio.h>
int main()
{
	int T,a[10],i,x;
	scanf("%d",&T);
	while(T--){
		for(i=0;i<8;i++){
		scanf("%1d",&a[i]);
		x=a[7]+a[4]+10*(a[5]+a[3])+100*(a[1]+a[2])+1000*(a[0]+a[6]);
		}printf("%d\n",x);
	}
	return 0;
}
