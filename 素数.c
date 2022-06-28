#include<stdio.h>

int main()
{
    int cnt,flag,j,n,a[100000],i;
	cnt=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		flag=1;
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0){flag=0;break;}
			}
		if(a[i]==1)flag=0;
		if(flag==1)cnt++;}
	printf("%d",cnt);
	return 0;
}
