/*#include<stdio.h>


struct date
{
	int year;
	int month;
	int day;
};


int main()
{
	int i,t,j,sum=0;
	struct date a[100];
	int tian[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d",&a[i].year,&a[i].month,&a[i].day);
		if(a[i].year%4==0&&a[i].year%100!=0||a[i].year%400==0)
		 tian[2]=29;
		else tian[2]=28;	
		for(j=0,sum=0+a[i].day-1;j<a[i].month;j++)
		{
			sum+=tian[j];
		}
		printf("%d\n",sum);
	}
	return 0;
}*/


/*#include<stdio.h>

struct shu
{
	int a[10];
};


int main()
{
	int t,i,j,k;
	struct shu b[100],c[100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		for(j=0;j<10;j++)
		{
			scanf("%d",&b[i].a);
		}
		c[100]=b[100]; 
		for(j=0;j<10;j++)
		{
			for(k=0;k<10-j;k++)
			{
				if(b[i].a[k]<b[i].a[k+1])
				{
					t=b[i].a[k];b[i].a[k]=b[i].a[k+1];
					b[i].a[k+1]=t;
				}
			}
		}
		for(j=0;j<10;j++)
		{
			printf("%d ",b[i].a[j]);
			for(k=0;k<10;k++)
			{
				if(c[i].a[j]==b[i].a[k])
				printf("%d ",k+1);
			}
		} 
	}
	
	return 0;
}*/


#include<stdio.h>
int main()
{int t;
scanf("%d",&t);
while(t--)
{
    struct student
    {char a[10];
     char b[10];
     double c1;
     double c2;
     double c3;
    }stu[5];
    int i,j,t;
    double p[5];
    for(i=0;i<5;i++)
    {
        scanf("%s %s %lf %lf %lf",stu[i].a,stu[i].b,&stu[i].c1,&stu[i].c2,&stu[i].c3);
        p[i]=(stu[i].c1+stu[i].c2+stu[i].c3)/3;
        printf("%.2lf\n",p[i]);
    }
    if(p[0]>p[1]&&p[0]>p[2]&&p[0]>p[3]&&p[0]>p[4])
        printf("%s %s %.2lf %.2lf %.2lf %.2lf\n",stu[0].a,stu[0].b,stu[0].c1,stu[0].c2,stu[0].c3,p[0]);
    if(p[1]>=p[0]&&p[1]>p[2]&&p[1]>p[3]&&p[1]>p[4])
        printf("%s %s %.2lf %.2lf %.2lf %.2lf\n",stu[1].a,stu[1].b,stu[1].c1,stu[1].c2,stu[1].c3,p[1]);
        if(p[2]>=p[0]&&p[2]>=p[1]&&p[2]>p[3]&&p[2]>p[4])
        printf("%s %s %.2lf %.2lf %.2lf %.2lf\n",stu[2].a,stu[2].b,stu[2].c1,stu[2].c2,stu[2].c3,p[2]);
        if(p[3]>=p[0]&&p[3]>=p[1]&&p[3]>=p[2]&&p[3]>p[4])
        printf("%s %s %.2lf %.2lf %.2lf %.2lf\n",stu[3].a,)
    return 0;
}

















