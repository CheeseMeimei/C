/*#include<stdio.h>

int main()
{
    int n,i,a=0,b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0) a++;
        if(i%2==0) b++;
    }
    printf("%d %d",a,b);
    return 0;
}*/

/*#include<stdio.h>

int main()
{
	int i,n;
    float a[100],max,min,ave=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    max=a[0];min=a[0];
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        max=a[i]>max?a[i]:max;
        min=a[i]<min?a[i]:min;
    }
    ave=sum/n;
    printf("%.2f %.2f %.2f",max,min,ave);
    return 0;
}*/

/*#include<stdio.h>

int main()
{
    int n,i,a[51],x,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x<a[i])
        {
            k=i;break;
        }
    }
    for(i=n;i>k;i--)
    {
        a[i]=a[i-1];
    }
    a[k]=x;
    for(i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char c[100],d[100];
    scanf("%s %s",&c,&d);
    if(strcmp(c,d)==0) printf("same");
    else printf("different");
    return 0;
}*/
/*#include<stdio.h>

int main()
{
    int n,m,i,j,sum=0,a[10][10];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]>0) sum+=a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}*/

/*#include<stdio.h>

int main()
{
	int n,i,a[50],cnt,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]<=a[i+1]) cnt=1;
		else cnt=-1;
		sum+=cnt;
	}
	if(sum==n-1||sum==-n+1) printf("sorted");
	else printf("unsorted");
	return 0;
}*/


/*#include<stdio.h>

int main()
{
	int n,i,a[50],x,k=0,b[50],cnt=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x) cnt++;
		else b[k++]=a[i];
	}
	for(k=0;k<n-cnt;k++)
	{
		printf("%d ",b[k]);
	}
	return 0;
}*/

/*//去重 
#include<stdio.h>

int main()
{
    int n,i,a[1000]={0},b[1000]={0},k=0,j,sum=1,cnt=0;
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                for(k=j;k<n-1;k++)
    			{
        			a[k]=a[k+1];
    			}
    			n--;j--;
            }
        }
    }
    for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}   
    return 0;
}*/

//合并数组 
/*#include<stdio.h> 

int main()
{
	int n,m,i,j,a[100],k,b[100],c[200];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	i=0;j=0;k=0;
	while(i<n&&j<m)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k=k+1;
			i=i+1;
		}
		else 
		{
			c[k]=b[j];
			k=k+1;
			j=j+1;
		}
	}
	if(i==n)
	{
		for(;j<m;j++)
		{
				c[k]=b[j];
				k=k+1;
		}
	}
	else if(j==m)
	{
		for(;i<n;i++)
		{
			c[k]=a[i];
			k=k+1;
		}
		
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	int n,m,i,j,a[100],b[100],c[200],k;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	i=0;j=0;k=0;
	while(i<n&&j<m)
	{
		if(a[i]<b[j])
		{
			c[k++]=a[i++];
		}
		else 
		{
			c[k++]=b[j++];
		}
	}
	if(i==n)
	for(;j<m;j++)
	{
		c[k++]=b[j];
	}
	if(j==m)
	for(;i<n;i++)
	{
		c[k++]=a[i];
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}*/
//利用二维数组输出 
/*#include<stdio.h>

int main()
{
	int i,j;
	float a[5][6],sum=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		sum=0;
		for(j=0;j<5;j++)
		{
			printf("%.2f ",a[i][j]);
			sum+=a[i][j];
		}
		printf("%.2f\n",sum);
	}
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	int n,m,i,j,a[5][5],x,y;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&x,&y);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(x==i&&y==j) printf("%d",a[i][j]);
		}
	}
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	int i,j,n,m,a[100];
	scanf("%d %d",&n,&m);
	for(i=0;i<n*m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n*m;i++)
	{
		printf("%d ",a[i]);
		if((i+1)%m==0)
			printf("\n");
	}
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	int i,j,n,m,a[10][10],max;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	max=a[1][1];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i][j]>max) max=a[i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(max==a[i][j]) printf("%d %d",i,j); 
		}
	}
	return 0;
}*/
















