#include<iostream>

using namespace std;

void paixu(int* pa,int c);

void print(int* ppa,int c);

int main()
{
	int a[10]={4,3,6,9,1,2,10,8,7,5};
	
	int c=sizeof(a)/sizeof(a[0]);
	
	paixu(a,c);
	
	/*for(int i=0;i<c;i++)
	{
		cout<<a[i]<<" ";
	}*/

	print(a,c);
	
	system("pause");
	
	return 0;
}

void paixu(int* pa,int c)
{
	int i,j;
	for(i=0;i<c-1;i++)
	{
		for(j=0;j<c-1-i;j++)
		{
			if(*(pa+j)>*(pa+j+1))
			{
				int temp=*(pa+j);
				*(pa+j)=*(pa+j+1);
				*(pa+j+1)=temp;
			}
		}
	}
}

void print(int* ppa,int c)
{
	for(int i=0;i<c;i++)
	{
		cout<<ppa[i]<<" "; 
	}
}
