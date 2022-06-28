#include<stdio.h>
/*有一个结构体变量stu,内含学生学号、姓名和两门课的成绩要求通
过输人函数为结构体变量赋值，并输出该学生的学号和平均成绩。*/
struct student
{
	char xuehao[25];
	char xingming[25];
	int xueke1;
	int xueke2;
	float answer;
};
struct student stu[100];

int main()
{
	struct student* p ;
	p=stu;
	int n,q,i;
	char k[100];
	scanf("%d,%d",&n,&q);
	for(i=0;i<n;i++)
	{
		scanf("%s %s %d %d",&stu[i].xuehao,&stu[i].xingming,&stu[i].xueke1,&stu[i].xueke2);
		
		stu[i].answer=(stu[i].xueke1+stu[i].xueke2)/2.0;
	}
	for(i=0;i<q;i++)
	{
		scanf("%s",p->xingming);
		printf("%s %f\n",p->xuehao,p->answer);
	}	
	return 0;
 }
