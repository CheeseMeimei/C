#include<stdio.h>
#include<math.h> 
int main()
{
	double x, y;
	scanf("%lf",&x);
	if(x>=0) y=pow(x,0.5);
	if(x<=0) y=pow((x+1),2)+2*x+1/x;
	printf("f(%.2lf)=%.2lf",(double)x,y);
	return 0;
 } 
