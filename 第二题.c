#include<stdio.h>
int main(){
	int n,a[100000]={0},i,cnt=0; 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%1d",&a[i]);
	for(i=0;i<n/2;i++){
		if(a[i]+a[n-i-1]!=10)
		cnt++;
	}
	printf("%d",cnt);
	return 0;
}
