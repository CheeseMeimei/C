#include<stdio.h>

struct stu
{
	char name[20];
	int count[3];
};

int main()
{
	int i,n;
	struct stu ren[3];
	
	char ren[20];
	scanf("%d",&n);
	scanf("%s %s %s",&stu.ren1,&stu.ren2,&stu.ren3);
	for(i=0;i<n;i++)
	{
		scanf("%s",&ren);
		if(strcmp(ren,struct stu.ren1)==0)
		stu.count1++;
		if(strcmp(ren,struct stu.ren2)==0)
		stu.count2++;
		if(strcmp(ren,stu.ren3)==0)
		stu.count3++;
	}
	for(i=1;i<=3;i++)
	printf("%s %d\n",stu.ren[i],stu.count[i]);
	return 0;
}
