#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
    int T;
    double a,b,c,d,s,s2,s3,p,r,sina;
    scanf("%d",&T);
    while(T--){
     scanf("%lf %lf %lf",&a,&b,&c);
     p=(a+b+c)/2;
     d=p*(p-a)*(p-b)*(p-c);
     s3=sqrt(d);
     sina=2*s3/(b*c);
     r=a/(2*sina);
     s2=PI*r*r;
     s=s2-s3;
     printf("%.6lf\n",s);
 }
    return 0;
}
