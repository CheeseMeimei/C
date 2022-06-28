#include<stdio.h>
int main()
{   
	int i,j,k,z,a,n;
    printf("叮叮当，叮叮当，铃儿响叮当\n祝宝宝圣诞节快乐鸭");
    printf("\n");
    printf("宝宝想看几层的圣诞树呢，最多只有3层哦(*￣︶￣*)");
    printf("\n");
    printf("请输入：1或2或3，然后按回车（你这么笨我还是都告诉你好了）") ;
    printf("\n");
    scanf("%d",&z);
        if(z==1)
        {
            for(i=1; i<=3; i++)
            {
                for(j=1; j<=5-i; j++)
                    printf("%c",' ');
                for(j=1; j<=2*i-1; j++)
                    printf("%c",'*');
                printf("\n");

            }
            for(k=1; k<=2; k++)
            {
                for(j=1; j<=3; j++)
                    printf("%c",' ');
                putchar(42);
                putchar(42);
                putchar(42);
                printf("\n");
            }
        }
        if(z==2) {
            for(i=1; i<=3; i++)
            {
                for(j=1; j<=5-i; j++)
                    printf("%c",' ');
                for(j=1; j<=2*i-1; j++)
                    printf("%c",'*');
                printf("\n");
            }
            for(i=1; i<=3; i++)
            {
                for(j=1; j<=5-i; j++)
                    printf("%c",' ');
                for(j=1; j<=2*i-1; j++)
                    printf("%c",'*');
                printf("\n");
            }
            for(k=1; k<=2; k++) 
			{
                for(j=1; j<=3; j++)
                    printf("%c",' ');
               	putchar(42);
               	putchar(42);
                putchar(42);
                printf("\n");
            }
            for(k=1; k<=2; k++) 
			{
                for(j=1; j<=3; j++)
                	printf("%c",' ');
               	putchar(42);
                putchar(42);
                putchar(42);
                printf("\n");
       		}
        }
        if(z==3) 
		{
            for(i=1; i<=3; i++)
            {
                for(j=1; j<=5-i; j++)
                    printf("%c",' ');
                for(j=1; j<=2*i-1; j++)
                    printf("%c",'*');
                printf("\n");
            }
            for(i=1; i<=3; i++)
            {
                for(j=1; j<=5-i; j++)
                    printf("%c",' ');
                for(j=1; j<=2*i-1; j++)
                    printf("%c",'*');
                printf("\n");
            }
            for(i=1; i<=3; i++)
            {
                for(j=1; j<=5-i; j++)
                    printf("%c",' ');
                for(j=1; j<=2*i-1; j++)
                    printf("%c",'*');
                printf("\n");
            }
            for(k=1; k<=2; k++) 
			{
                for(j=1; j<=3; j++)
                    printf("%c",' ');
                putchar(42);
                putchar(42);
                putchar(42);
                printf("\n");
            }
            for(k=1; k<=2; k++) 
			{
                for(j=1; j<=3; j++)
                    printf("%c",' ');
                putchar(42);
                putchar(42);
                putchar(42);
                printf("\n");
            }
			for(k=1; k<=2; k++) 
			{
                for(j=1; j<=3; j++)
                    printf("%c",' ');
                putchar(42);
                putchar(42);
                putchar(42);
                printf("\n");
            }
        }
        printf("这是我俩一起过的第一个圣诞节哦，但不会是最后一个，mua");
        printf("\n");
	return 0;
}
