/*#include<stdio.h>
int a[1000][1000];
int main()
{
	int n,m,i,j,maxx=0,sum=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;i<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	maxx=a[1][1];
	for(i=1;i<=n;i++)
	{
		for(j=1;i<=m;j++)
		{
			if(a[i][j]>maxx) maxx=a[i][j];
			if(a[i][j]==maxx) sum=sum+i+j;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;i<=m;j++)
		{
			if(a[i][j]==maxx) sum=sum+i+j;
		}
	}
	printf("%d\n",sum);
	return 0;
}*/
#include<stdio.h>
int a[1000][1000];
int main()
{
	int n,m,i,j;int maxx,sum=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	maxx=a[1][1];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i][j]>maxx) maxx=a[i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i][j]==maxx) sum+=i+j;
		}
	}
	printf("%d",sum);
	return 0;
}

/*#include<stdio.h>
int a[100000000];
int main()
{
	int n,k,i,sum,op;
	scanf("%d %d %d",&n,&k,&op);
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	long  n,m;
	int i,x=0,a;
	scanf("%d %d",&n,&m);
	n=n%1000000007;m=m%1000000007;
	for(i=1;i<=m;i++)
	{
		a=(n%i)%1000000007;
		x=(x+a)%1000000007;
	}
	printf("%d",x);
	return 0;
}
*/
#include<stdio.h>
int a[100000000];
int main()
{
	int n,k,i,sum,op;
	scanf("%d %d %d",&n,&k,&op);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for()
	
	return 0;
}

/*#include<stdio.h>

int main()
{
	int i,n,t,x=0;
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		x=x*10+n%10;
		t=t/10;
	}
	if(n==x)
	{
		printf("yes");
	}
	else printf("no");
	
	return 0;
}*/


















