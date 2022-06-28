#include<stdio.h>
#include<stdlib.h>
int compare(const int *a1,const int *a2); 
int* main(){
	int a[40]={0},i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	qsort(a,n,4,compare);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

int* compare(const void *a1,const void *a2)
{
	return *(int *)a1-*(int *)a2;
}
