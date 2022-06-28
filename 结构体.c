#include<stdio.h>

struct stu
	{
		int count;
		char name[10];
	};
	struct stu leader[3]={10,"zhangyu",20,"yujia",30,"sanjia"};
	
int main()
{
	int i,j;
	char leader_name[20];
	for(i=0;i<10;i++)//有十个人投票
	{
		scanf("%s",leader_name); 
		for(j=0;j<3;j++)
		if(strcmp(leader_name,leader[j].name)==0)
		leader[j].count++;
	} 
	for(i=0;i<3;i++)
	printf("%d,%s\n",leader[i].count,leader[i].name);
	return 0;
}
