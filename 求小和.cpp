#include<stdio.h>

int l=0,r=6;

int sweap(int* arr,int r,int mid);

int merge(int* arr,int l,int mid,int r);

int main()
{
	int a[r-l]={14,76,34,72,91,59};
	
	int mid=l+((r-l)>>1);
	
	int c=sweap(a,l,mid);
	
	int b=sweap(a,mid,r);
	
	for(int i=0;i<r-l;i++)
	{
		printf("%d ",a[i]);
	}
	
	int xiaohe=merge(a,l,mid,r);
	
	printf("%d",c+b+xiaohe);
	
	return 0;
}

int sweap(int* arr,int r,int mid)
{
	int i,j;
	int xiaohe=0;
	for(i=r;i<mid-1;i++)
	{
		for(j=i+1;j<mid;j++)
		{
			if(arr[i]<arr[j])
			xiaohe+=arr[i];
		}
		
	}
	printf("%d\n",xiaohe);
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
	
	return xiaohe;
}


int merge(int* arr,int l,int mid,int r)
{
	int p1=l;
	int p2=mid;
	int exert[r-l]={0};
	int i=0;
	int xiaohe=0;
	while(p1<mid&&p2<r)
	{
		if(arr[p1]<arr[p2]) 
		{
			xiaohe+=(r-p2)*arr[p1];
	
			exert[i++]=arr[p1++];
		}
		else exert[i++]=arr[p2++];
	}
		return xiaohe;
}
