#include<stdio.h>
int main()
{   
	int i,j,k,z,a,n;
    printf("��������������������춣��\nף����ʥ���ڿ���Ѽ");
    printf("\n");
    printf("�����뿴�����ʥ�����أ����ֻ��3��Ŷ(*�����*)");
    printf("\n");
    printf("�����룺1��2��3��Ȼ�󰴻س�������ô���һ��Ƕ���������ˣ�") ;
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
        printf("��������һ����ĵ�һ��ʥ����Ŷ�������������һ����mua");
        printf("\n");
	return 0;
}
