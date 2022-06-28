#include<stdio.h>

int main()
{
	int x,t,cnt,flag,sm,er,shu,answer,a[6]={0};
	cnt=0,scanf("%d",&x);
	while(x>0){
		t=x%10;cnt++;x=x/10;
		if(t%2==0) flag=1;else flag=0;
		if(cnt%2==0) sm=1;else sm=0;
		if(flag==sm) er=1;else er=0;
		a[cnt-1]=er;
	}
	for(cnt=0,answer=0,shu=1;cnt<6;cnt++){
		answer+=shu*a[cnt];shu*=2;
	}printf("%d",answer); 
	return 0;
 } 
