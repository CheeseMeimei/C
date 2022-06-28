#include<stdio.h>

int main() 
{
	int x;
	float y;
	scanf("%d",&x);
    if(x==0) y=0;
    else y=1.0/x;
    printf("f(%.1f)=%.1f",(float)x,y);
    return 0;
} 
