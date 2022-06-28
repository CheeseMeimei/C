#include<stdio.h>
int n,j;
void charu(int a[j],int x);
int main()
{
	int a[10000],i,x;
	scanf("%d",&n);
	for(i=10000;i>10000-n;i--)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);//需要插入的程序
	charu(a,x); 
	return 0;
}

void charu(int a[j],int x)
{
	int i,k;
	for(i=10000;i>10000-n;i--)
	{
		if(x>a[i])
		{
			k=i;break;
		}
	}
	for(i=10000-n-1;i<k;i++)
	{
		a[i]=a[i+1];
	}
	a[k]=x;
	for(i=10000;i>10000-n-1;i--)
	{
		printf("%d ",a[i]); 
	}
}
