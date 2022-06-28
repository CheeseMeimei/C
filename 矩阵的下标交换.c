#include<stdio.h>

int i,j;
void exchange(int* a,int* b);
int main()
{
	int a[3][4],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;i<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	exchange(3,4);
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
	}
	return 0;
} 

void exchange(int* a,int* b)
{
	int t=0;
	t=*a;*a=*b;*b=t;
}
