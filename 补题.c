/*#include<stdio.h>

int main()
{
	int a,b;
	char c,d;
	scanf("%d%c%d%c",&a,&c,&b,&d);
	printf("%d+%d=%d",a,b,a+b);
	return 0;
}*/

//给出一个4位数，求该数个位、十位、百位、千位上的数的积。
//2345
/*#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",(x/1000)*(x%10)*(x/10%10)*(x/100%10));
	return 0;
}*/

/*#include<stdio.h>
#include<math.h>
//输入三个数a,b,c,且
//a!=0,且b*b-4*a*c>=0,求解a*x*x+b*x+c=0的两个根。
int main()
{
	int a,b,c;
	double p,q,w;
	scanf("%d %d %d",&a,&b,&c);
	p=-b/(2.0*a);w=b*b-4*a*c;q=sqrt(w)/(2.0*a);
	if(p-q<p+q)
	printf("%.2lf %.2lf",p-q,p+q);
	if(p-q>p+q)
	printf("%.2lf %.2lf",p+q,p-q);
	return 0;
}*/


/*#include<stdio.h>

int main()
{
	//输入一个整数，表示华氏温度。
	int a;
	scanf("%d",&a);
	printf("%.2lf",(a-32)/1.8);
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",3*x*x*x+2*x*x+x+1);
	return 0;
}*/


/*#include<stdio.h>

int main()
{
	int a=rand()%100+1;
	int b=rand()%100+1;
	printf("%d+%d=%d",a,b,a+b);
	return 0;
}*/


/*#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	if(x<-1)
	printf("1");
	if(x<100&&x>=-1)
	printf("%d",3*x*x-4*x+5);
	if(x>=100)
	printf("%d",2*x-3);
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	int a,b,c,max=0;
	scanf("%d %d %d",&a,&b,&c);
	max=a;
	if(max<b)
	max=b;
	if(max<c)
	max=c;
	printf("%d",max);
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b)
	{
		if(b>c)
		{
			if(c>d) printf("%d %d %d %d",a,b,c,d);
			else printf("%d %d %d %d",a,b,d,c);
		}
		else//c>b
		{
			if(b>d) printf("%d %d %d %d",a,c,b,d);
			esle printf("%d %d %d %d",a,c,d,b);
		}
	}
	return 0;
}*/


#include<stdio.h>

int main()
{
	char c[5][5];
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			scanf("%c",&c[i][j]);
		}
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(c[i][j]=='_')
			{
		
				if(i==1)
				{
					
					if(j==1)
					{
						if(c[i+1][j]=='X'&&c[i+2][j]=='X') printf("Yes");
						else if(c[i][j+1]=='X'&&c[i][j+2]=='X') printf("Yes");
						else if((c[i+1][j+1])=='X'&&c[i+2][j+2]=='X') printf("Yes");
						else printf("No");
					}
					if(j==2)
					{
						if(c[i+1][j]=='X'&&c[i+2][j]=='X') printf("Yes");
						else if(c[i][j-1]=='X'&&c[i][j+1]=='X') printf("Yes");
						else printf("No");
					}
					if(j==3)
					{
						if(c[i+1][j]=='X'&&c[i+2][j]=='X') printf("Yes");
						else if(c[i][j-1]=='X'&&c[i][j-2]=='X') printf("Yes");
						else printf("No");
					}
				}
				if(i==2)
				{
					if(j==1)
					{
						if(c[i-1][j]=='X'&&c[i++][j]=='X') printf("Yes");
						else if(c[i][j+1]=='X'&&c[i][j+2]=='X') printf("Yes");
						else printf("No");
					}
					if(j==2)
					{
						if(c[i-1][j]=='X'&&c[i+1][j]=='X') printf("Yes");
						else if(c[i][j-1]=='X'&&c[i][j+1]=='X') printf("Yes");
						else if(c[i-1][j-1]=='X'&&c[i+1][j+1]=='X') printf("Yes");
						else if(c[i-1][j+1]=='X'&&c[i+1][j-1]=='X') printf("Yes");
						else printf("No");
					}
					if(j==3)
					{
						if(c[i+1][j]=='X'&&c[i-1][j]=='X') printf("Yes");
						else if(c[i][j-1]=='X'&&c[i][j-2]=='X') printf("Yes");
						else printf("No");
					}
				}
				if(i==3)
				{
					if(j==1)
					{
						if(c[i-1][j]=='X'&&c[i-2][j]=='X') printf("Yes");
						else if(c[i][j+1]=='X'&&c[i][j+2]=='X') printf("Yes");
						else if((c[i-1][j+1])=='X'&&c[i-2][j+2]=='X') printf("Yes");
						else printf("No");
					}
					if(j==2)
					{
						if(c[i-1][j]=='X'&&c[i-2][j]=='X') printf("Yes");
						else if(c[i][j-1]=='X'&&c[i][j+1]=='X') printf("Yes");
						else printf("No");
					}
					if(j==3)
					{
						if(c[i-1][j]=='X'&&c[i-2][j]=='X') printf("Yes");
						else if(c[i][j-1]=='X'&&c[i][j-2]=='X') printf("Yes");
						else if(c[i-1][j-1]=='X'&&c[i-2][j-2]=='X') printf("Yes");
						else printf("No");
					}
				}
				
			}
		}
	} return 0;
}

























































