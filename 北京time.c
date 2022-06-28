#include<stdio.h>

int main()
{
    int i,a,b;
    scanf("%d",&i);
    a=(i/100-8);
    if(a<=10&&a>0)
    b=i*100+a%100;
    else if(a<=0)
    b=i%100;
    else if(a!=0,i%100<10)
    b=i/100+i%10;
    else if(a=0,i%100<10)
    b=i%10;
    printf("%d",b);
    return 0;
}
