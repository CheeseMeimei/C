#include<stdio.h>
int main()
{
    int T,a,b,d;
    char c;
    scanf("%d",&T);
    while(T--){
    	scanf("%d%c%d",&a,&c,&b);
    	switch (c){
    		case '+':d=a+b;break;
    		case '-':d=a-b;break;
		}
		printf("%d\n",d);
	}
    return 0;
}

