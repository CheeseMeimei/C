#include<stdio.h>
int max,min,i,j,N;
void compare(int a[i][j]);
double ave(int a[i][j]);
int o=0,b=0,c=0,d=0,e=0;
void cnt(int a[i][j]);
int main()
{
	scanf("%d",&N);
	int a[N][2];
	double ret;
	for(i=0;i<N;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	ret=ave(a);
	compare(a);
	cnt(a);
	printf("%.2lf %d %d",ret,max,min);
	printf("\n");
	printf("%d %d %d %d %d",o,b,c,d,e);
	return 0;
}

double ave(int a[i][j])
{
	int i,sum=0;
	double ret;
	for(i=0;i<N;i++)
	{
		sum+=a[i][1];
	}
	ret=1.0*sum/N;
	return ret;
}

void compare(int a[i][j])
{
	int m;
	max=a[0][1];min=a[0][1];
	for(m=0;m<N;m++)
	{
		if(a[m][1]>max) max=a[m][1];
		if(a[m][1]<min) min=a[m][1];
	}
}

void cnt(int a[i][j])
{
	int m;
	for(m=0;m<N;m++)
	{
		if(a[m][1]>=90&&a[m][1]<=100)
		o++;
		else if(a[m][1]>=80&&a[m][1]<=89)
		b++;
		else if(a[m][1]>=70&&a[m][1]<=79)
		c++;
		else if(a[m][1]>=60&&a[m][1]<=69)
		d++;
		else if(a[m][1]<59)
		e++;
	}
}
