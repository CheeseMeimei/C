#include<stdio.h>

int r=10;

int l=0;

void sweap(int* arr,int r,int mid);

void merge(int* arr,int l,int mid,int r);

int main()
{
	int a[r-l]={10,41,46,38,756,48,76,168,31,68};
	
	int mid=l+((r-l)>>1);
	
	sweap(a,l,mid);
	
	sweap(a,mid,r);
	
	for(int i=l;i<r;i++)
	{
		printf("%d ",a[i]);
	}
	
	merge(a,l,mid,r);
	
	for(int i=l;i<r;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

void sweap(int* arr,int r,int mid)
{
	int i,j;
	for(i=r;i<mid;i++)
	{
		for(j=i+1;j<mid;j++)
		{
			int min=arr[i];
			if(arr[j]<min) 
			{
				int t=arr[i];arr[i]=arr[j];arr[j]=t;
			}
			
		}
	}
}

void merge(int* arr,int l,int mid,int r)
{
	int p1=l;
	int p2=mid;
	int exert[r-l]={0};
	int i=0;
	while(p1<mid&&p2<r)
	{
		if(arr[p1]<=arr[p2]) exert[i++]=arr[p1++];
		else exert[i++]=arr[p2++];
	}
	while(p1<mid)
	{
		exert[i++]=arr[p1++];
	}
	while(p2<r)
	{
		exert[i++]=arr[p2++];
	}
	for(i=0;i<r-l;i++)
	{
		arr[l+i]=exert[i];
	}
}
