#include<stdio.h>

int main()
{
   int x,k,n,i;
   i=0;
    scanf("%d %d",&n,&k);

    scanf("%d",&x);goto loop;
    loop:if(x>k)
    {
        i++;
        scanf("%d",&x);goto loop;

    }

    printf("%d",i);
}
