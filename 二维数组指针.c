#include<stdio.h>

int main()
{
	int a[2][3];
	int* p=a[0];
	int i,j; 
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	/*for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",*p++);
	printf("\n");
	}*/
	for(p=a[0];p<a[0]+2*3;p++)
	{
		printf("%d ",p);
		if((p+1)%4)==0)
		printf("%\n");
	}
	return 0;
}
