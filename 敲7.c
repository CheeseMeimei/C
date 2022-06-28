#include<stdio.h>

int main()
{
	int t,flag;
	long long r,i,j;
	flag=1;
	scanf("%d",&t);
	while(t>0){
		scanf("%lld %lld",&j,&r);
		for(i=j;i<=r;i++){
			if(i%7==0||i%10==7||i/100==7||i/10%10==7)flag=0;
			else flag=1;
	if(i==r){
		if(flag==0)printf("1\n");
	else if (flag==1)printf("0\n");}
	else {if(flag==0)printf("1 ");
	else if (flag==1)printf("0 ");}
	}t--;}
	return 0;
}
