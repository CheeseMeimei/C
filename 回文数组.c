/*#include<stdio.h>

int main()
{
    int n,i,a[1000],flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%1d",&a[i]);
    if(n%2==0){
    	for(i=0;i<n/2;i++){
    		if(a[i]==a[n-1-i]) flag=1;
    		else flag=0;
		}}
	if(n%2==1){
		for(i=0;i<=n/2;i++){
			if(a[i]==a[n-1-i]) flag=1;
			else flag=0;
		}}
		if(flag==1) printf("YES");
		else printf("NO");
    return 0 ;
}*/

/*#include<stdio.h>

int main()
{
	int n,a[5],i=0,t,flag,j,cnt=10,b=1;
	scanf("%d",&n);
	while(n>0)
	{
		a[i]=n%10;
		n=n/10;
			i++;
	}
	
	i=i-1;
	/*for(j=0;j<=i;j++)
	{
		printf("%d ",a[j]);
	}
		printf("%d ",i)/
	if(i%2==0)
	{
		for(j=0;j<i/2;j++)
		{
			if(a[j]==a[i-j]) flag=1;
			else flag=0;
		}
	}
	else if(i%2==1)
	{
		for(j=0;j<=i/2;j++)
		{
				if(a[j]==a[i-j]) flag=1;
			else flag=0;
		}
	}
		if(flag==1) printf("yes");
		else printf("no");
	return 0;
}*/
