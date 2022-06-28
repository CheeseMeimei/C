/*#include<stdio.h>
int sub(int n);
int main()
{
	int x,result;
	scanf("%d",&x);
	printf("%d=",x);
	result=sub(x);
	printf("=%",result);
	return 0;
}

int sub(int n)
{
	int t=0,answer=1;
	while(n>0)
	{
	t=n%10;
	n=n/10;
	answer*=t;
	if(n>9)
	printf("%d*",t);
	else if(n>0&&n<=9)
	printf("%d",t);
	}
	return answer;
}





#include<stdio.h>

int main()
{
	int x,t,cnt=1,n,z,answer=0,result=1;
	scanf("%d",&x);
	printf("%d=",x);
	n=x;z=x;
	while(n>9)
	{
		n/=10;cnt*=10;
	}
	while(cnt>0)
	{
	t=z%10;answer+=t*cnt;cnt/=10;z/=10;
	}
	while(answer>0)
	{
		t=answer%10;answer/=10;
		if(answer>0)printf("%d*",t);
		else printf("%d",t);
		result*=t;
	}
	printf("=%d",result);
	return 0;
}*/


#include<stdio.h>
#include<math.h>
int a[21]={0};
int main() 
{
 int i=19,w=0;
 long long x,q=1;
scanf("%lld",&x);
printf("%lld=",x);
while(x)
{
 a[i]=x%10;
 x/=10;
 i--;
 w++;
}
for(i=20-w;i<20;i++)
{
  printf("%d",a[i]);
  if(i!=19)
  {
   printf("*");
  }
  q*=a[i];
}
printf("=%d",q);
return 0; 
}


























