#include<stdio.h>

int main()
{
	int grade[5][6],i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&grade[i][j]);//ÊäÈëÑ§ºÅ£¬³É¼¨1.2.3 
		}
	}
	ave(grade[5][6]);
	for(i=0;i<5;i++)
	{
		printf("%d %d %d",grade[i][0],grade[i][4],grade[i][5]);
	}
	return 0;
 } 
 
 int ave(int grade[5][6])
 {
 	int i;
 	for(i=0;i<5;i++)
 	{
 		grade[i][4]=0;
 		grade[i][4]=a[i][1]+a[i][2]+a[i][3];
		a[i][5]=a[i][4]/3;
	}
 }
