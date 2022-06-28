#include<stdio.h>
int main()
{
	int H,g,t;
	double height;
	H=100;t=3;g=10;
	height=1.0/2*g*t*t;
	if(H>height)printf("%.2f",height);
	else printf("%d",H);
	return 0;
}
