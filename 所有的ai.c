#include<stdio.h>

int main()
{
	int a[100000],i,j,n,c,sum=0,d;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		/*	for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				if(i==j)
				{
					c=a[i]/a[j];sum+=c;
				}
				else 
				{
					c=a[i]/a[j];d=a[j]/a[i];
				sum+=c+d;
				}
				
			}
		}*/
		
		/*for(i=0;i<n-1;i++)
		{
			sum+=1+a[i]/a[i+1]+a[i+1]/a[i];
		}*/
	printf("%d",sum);
	
	
	return 0;
}
