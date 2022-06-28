#include<stdio.h>

int main()
{
	int i,j,a[100]={0},w[10]={0},flag,k=0,cnt=0;
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100+1;
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
	flag=1;
	if(a[i]==1)continue;
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0){flag=0;break;	}
		}
		if(flag==1)
		{
			cnt++;
			w[k]=a[i];
			printf("%d %d ",cnt,w[k]);
			k++;
		}
	}
	return 0;
} 
