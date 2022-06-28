/*#include<stdio.h>

int main()
{
	int n,i,x,cnt=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x%2==0&&x%3==0&&x%5==0)
		cnt++;
	}
	printf("%d",cnt);
	return 0;
}*/





/*#include<stdio.h>
 
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d",n/m);
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
		a=n%i%1000000007;
		x=(x+a)%1000000007;
	}
	printf("%d",x);
	return 0;
}*/


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

/*#include<stdio.h>
int main()
{
	int n,a[5],i=0,t,flag,j,cnt=10,b=1;
	scanf("%d",&n);
	while(n>0)
	{
		a[i]=n%cnt;
		i++;
		n=n/10;
	}
	
	for(j=0;j<=i;j++)
	{
	
	printf("%d",a[i]);
	}
	printf("\n");
	t=i;
	for(j=0;j<t/2;j++)
	{
		if(a[j]==a[i]) flag=1;
		else flag=0;
		i--;
	}
	if(flag==1) printf("yes");
	else printf("no");
	return 0;
}*/

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




















