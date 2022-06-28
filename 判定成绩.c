#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x==100)
        printf("S");
    else if(90<=x)
        printf("A");
    else if(80<=x)
        printf("B");
    else if(70<=x)
        printf("C");
    else if(60<=x)
        printf("D");
       else if(x<=59)
        printf("E");
        return 0;
}
