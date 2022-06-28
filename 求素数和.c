#include<stdio.h>
int main()
{
    int n,m,i,j,k,sum,b[200],o,flag;
	sum=0;
	for(j=0,k=0;j<=1224;j++){
	  flag=1;
	  for(o=2;o<j;o++){
	  if(j%o==0){flag=0;break;}
	  }
	  if(flag==1) {
	  if(j==1)continue;
	  b[k]=j;k++;}
	}
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++)
		sum+=b[i];
	printf("%d",sum);
    return 0;
}

