#include<stdio.h>

int main()
{
	int a[10]={1,48,79,15,3,74,748,45,234,8};
	
	int i,j,t;
	/*//≈≈–Ú 
	for(i=0;i<9;i++)
	{
		
		for(j=i+1;j<10;j++)
		{
			int min=a[i];
			if(a[j]<min)
			{
				min=a[j];
				t=a[i];a[i]=a[j];a[j]=t;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}*/
	
	/*//√∞≈›
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
		}
	 } 
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}*/
	
	//≤Â»Î
	for(i=1;i<10;i++)
	{
		for(j=i;j>=0&&a[j]>a[j+1];j--)
		{
			t=a[j];a[j]=a[j+1];a[j+1]=t;
		}
	 } 
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	
	
	return 0;
}
