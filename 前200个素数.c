#include<stdio.h>

int main()
{
	int cnt,i,j,flag;
	cnt=0;
	while(cnt<200){
		for(i=2;i<1250;i++)
		{
		flag=1;
		  for(j=2;j<i;j++)
		  {
		  	if(i%j==0)
			  {
		  	   flag=0;break;	
			  }
		  }
			if(flag==1)
			{
				printf("第%d个素数是 %d  ",cnt,i);cnt++;
			}
		  
		}
	}
	return 0;
 } 
