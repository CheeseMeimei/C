#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10000],str2[10000];
	char* p1;char* p2;
	p1=str1;p2=str2;
	scanf("%s",str1);
	scanf("%s",str2);
	strcat(p1,p2);
	puts(str1);
	return 0;
}
