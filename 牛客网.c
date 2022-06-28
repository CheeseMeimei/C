/*#include<stdio.h>

int main()
{
    int i,j,t;
    while((scanf("%d",&t))!=EOF)
    {
        for(i=t;i>=1;i--)
        {
            for(j=1;j<=t;j++)
            {
            	if(i==j) printf("*");
            	else printf(" ");
			}
			printf("\n");
        }
    }
    return 0;
}*/

/*
*   *
 * * 
  *  
 * * 
*   *
*/

/*+#include<stdio.h>

int main()
{
	int t,i,j;
	while((scanf("%d",&t))!=EOF)
	{
		for(i=1;i<=t;i++)
		{
			for(j=1;j<=t;j++)
			{
				if(i==j||i+j==t+1) printf("*");
				else printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}*/


/*
 * * * * 
 *     * 
 *     * 
 * * * *
*/

/*#include<stdio.h>

int main()
{
	int t,i,j;
	while((scanf("%d",&t))!=EOF)
	{
		for(i=1;i<=t;i++)
		{
			for(j=1;j<t;j++)
			{
				if(i==1||i==t||j==)
			}
		}
	}
	return 0;
}*/
/*
1
1 2
1 2 3
1 2 3 4
*/
/*#include<stdio.h> 

int main()
{
	int t,i,j;
	while((scanf("%d",&t))!=0)
	{
		for(i=1;i<=t;i++)
		{
			for(j=1;j<=t;j++)
			{
				if(i==j)
				{printf("%d",j);break;}
				else printf("%d",j);
			}
			printf("\n");
		}
	}
	return 0;
}*/


/*#include<stdio.h>

int main()
{
	float ave,sum=0.0;
	int a[7]={0},i,max,min;
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
		max=a[0];min=a[0];
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
		sum+=a[i];
	}
	printf("%d %d",max,min);
	sum=sum-max-min;
	ave=sum/5.0;
	printf("%.2f\n",ave);
	return 0;
}*/

/*#include<stdio.h>
int main(){
    int arr[7]={0};
    int i=0;
    int min=100;
    int max=0;
    int j;
  for(i;i<7;i++){
      scanf("%d",&arr[i]);//初始化数组
      if(arr[i]>max){//同时找出最大数
          max=arr[i];
      }
      if(arr[i]<min){//最小数
          min=arr[i];
      }
    }
    float sum=0.0;
    for( j=0;j<7;j++){//计算总和
          sum+=arr[j];
    }
    printf("%.2f",(sum-max-min)*1.0/5.0);//结果除去最大最小
}
*/


/*#include<stdio.h>

int main()
{
    int n,i,j,a[100];
    while((scanf("%d",&n))!=EOF)
    {
        for(i=2;i<=n;i++)
        {
            a[i]=i;
        }
        for(j=2;j<=n;j++)
        {
        	for(i=j+1;i<n+1;)
		}
		for(i=2;i<=n;i++)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}*/

/*#include<stdio.h>

int main()
{
    int m,n,j,i,cnt=0,a[100][100];
    float c;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=m;i<2*m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
	for(i=0;i<2*m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==a[i+m][j])
                cnt++;
        }
    }
    c=cnt*1.0/(float)(m*n)*100;
    printf("%.2f",c);
    return 0;
}*/


/*#include<stdio.h> 

int main()
{
	int T,a,b,c,t;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(a>b) 
		{
			t=a;a=b;b=t;
		}
		if(a<c)
		{
			t=a;a=c;c=t;
		}
		if(b<c)
		{
			t=b;b=c;c=t;
		}
		if(a>b) 
		{
			t=a;a=b;b=t;
		}
		printf("%d %d %d\n",a,b,c);
	}
	return 0;
}*/


/*#include<stdio.h>

int main()
{
	int T,a,b,c,d,x,f;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		f=a*x*x*x+b*x*x+c*x+d;
		if(a!=0&&b==0&&c==0&&d==0) printf("Yes No\n");
		if(a!=0&&b==0&&c!=0&&d==0) printf("Yes No\n");
		if(a==0&&b!=0&&c==0&&d==0) printf("No Yes\n");
		if(a==0&&b!=0&&c==0&&d!=0) printf("No Yes\n");
		if(a!=0&&b!=0&&c!=0&&d!=0) printf("No No\n");
		if(a!=0&&b!=0&&c==0&&d!=0) printf("No No\n");
		if(a!=0&&b!=0&&c!=0&&d==0) printf("No No\n");
		if(a==0&&b!=0&&c!=0&&d!=0) printf("No No\n");
		if(a!=0&&b==0&&c!=0&&d!=0) printf("No No\n");
		if(a==0&&b==0&&c!=0&&d!=0) printf("No No\n");
		if(a==0&&b!=0&&c!=0&&d==0) printf("No No\n");
		if(a!=0&&b==0&&c==0&&d!=0) printf("No No\n");
		if(a!=0&&b!=0&&c==0&&d==0) printf("No No\n");
	}
	return 0;
}*/


/*#include<stdio.h>

int main()
{
	int T,n;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		if(n==1) printf("1\n");
		else 
		{
			if(n%4==2) printf("2\n");
			if(n%4==3) printf("4\n");
			if(n%4==0) printf("8\n");
			if(n%4==1) printf("6\n");
		}
	}
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	int birth_a,birth_b,dieth_a,dieth_b,T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d %d %d",&birth_a,&dieth_a,&birth_b,&dieth_b);
		if(birth_b>dieth_a||birth_a>dieth_b) printf("0\n");
		else if(birth_b>=dieth_a||birth_a>=dieth_b) printf("1\n");
		else if(dieth_b<=dieth_a&&birth_a<=birth_b) printf("%d\n",dieth_b-birth_b+1);
		else if(dieth_b>=dieth_a&&birth_a>=birth_b) printf("%d\n",dieth_a-birth_a+1);
		else if(birth_a<=birth_b&&dieth_a<=dieth_b) printf("%d\n",dieth_a-birth_b+1);	
		else if(birth_b<=birth_a&&dieth_b<=dieth_a) printf("%d\n",dieth_b-birth_a+1);
	}
	return 0;
}*/

/*#include<stdio.h>
#include<math.h>
int main()
{
	int T,n;
	double ans,answer;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %lf",&n,&ans);
		answer=sqrt(n);
		if(answer>ans)
		{
			if(answer-ans<0.01) printf("Yes\n");
			else printf("No\n");
		}
		else 
		{
			if(ans-answer<0.01) printf("Yes\n");
			else printf("No\n");
		}
	}
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	int T,y,m,d;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d-%d-%d",&y,&m,&d);
		if(m==2)
		{
			if(y%4==0&&y%100!=0||y%400==0)
			{
				if(d==29) y=y+4;
				else y=y+1;
			}
			else y=y+1;
		}
		else y=y+1;
		/*printf("%d-",y);
		if(m<10) printf("0%d-",m);
		else printf("%d-",m);
		if(d<10) printf("0%d\n",d);
		else printf("%d\n",d);
		if(m<10&&d<10)
		printf("%d-%02d-%02d\n",y,m,d);
		else if(m>=0&&d>=10)
		printf("%d-%02d-%d\n",y,m,d);
		else if(m<10&&d>=10)
		printf("%d-%02d-%d\n",y,m,d);
		else if(m>=10&&d<10)
		printf("%d-%02d-%02d\n",y,m,d);
	}
	return 0;
}*/


/*#include<stdio.h>

int main()
{
	int n,x,i,a[10000],sum=0;//n是最大面值，x是花费的钱数 
	scanf("%d %d",&n,&x); 
	if(x%n==0)
	printf("%d",x/n);
	if(x%n!=0)
	printf("%d",x/n+1);
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	int n,i,flag,j,k;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		flag=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0) 
			{
				flag=0;break;
			}
		}
		if(flag==1)
		{
			//判断n-i是不是素数；
			for(k=2;k<n-i;k++)
			{
				if((n-i)%k==0) 
				{
					flag=2; break;
				}
			}
			if(flag==1) 
			{
				printf("%d=%d+%d",n,i,n-i); goto loop;
			}
			else break; 
		}
	} 	
	loop:return 0;
}*/

/*#include<stdio.h>

int main()
{
	printf("You will pass this exam.");
	return 0;
}*/


/*#include<stdio.h>

int main()
{
	
	int T,n,k,i,j,,a[1000],b[1000];
	scanf("%d",&T);
	while(T--)
	{
		int cnt=0
		scanf("%d %d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(b[i]/a[j]==k) cnt++;
			}
		}
		printf("%d",cnt);
	}
	return 0;
}

/*#include<stdio.h>

int main()
{
	printf("2020-11-07");
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	char c;
	c=getchar();
	printf("       *\n      ***\n     *%c***\n   *%c**%c****\n    *******\n   **%c***%c**\n  ***********\n *************\n      ***\n      ***\n      ***\n",c,c,c,c,c);
	return 0;
}*/






