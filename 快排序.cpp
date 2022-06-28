#include<stdio.h>

void sweap(int * a,int num,int size);

int main()
{
	int a[10]={3,4,9,6,5,7,2,5,1,4};
	
	int num=5;
	
	int size=sizeof(a)/sizeof(a[0]);
	
	sweap(a,num,size);
	
	return 0;
}

void sweap(int * a,int num,int size)
{
	
	int i,k,t;
	
	int arr[100];
	
	for(i=0,k=0;i<size;i++)
	{
		if(a[i]<=num)
		{
			t=a[i];a[i]=a[k];a[k]=t;
			arr[k++]=a[i];
		}
	}
	for(i=k;i<size;i++)
	{
		arr[i]=a[i];
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
