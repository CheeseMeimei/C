/*#include<stdio.h>

int main()
{
    int n,m,i,j,flag=0,a[10][10],b[10][10];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==b[i][j]) flag=1;
            else
            {
                flag=0;goto loop;
            }
        }
    }
    loop:if(flag==1) printf("Yes");
    else if(flag==0) printf("No");
    return 0;
}*/

/*#include<stdio.h>

int main()
{
    int n,i,j,a[10][10],flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i][j]==0) flag=1;
            else 
            {
                flag=0;goto loop;
            }
        }
    }
    loop:if(flag==1) printf("YES");
    else printf("NO");
    return 0;
}*/
/*#include<stdio.h>

int main()
{
    int n,m,i,j,a[10][10];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}*/
//106¾ØÕó½»»» 
/*#include<stdio.h>

int main()
{
    int n,m,i,j,k,r,a,s,b,o[10][10]={0};
    char t;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&o[i][j]);
        }
    }
    scanf("%d",&k);
    while(k>0)
    {
        scanf(" %c %d %d",&t,&a,&b);
        if(t=='r')
        {
            for(i=0;i<n;i++)
            {
            	s= o[a-1][i];
                o[a-1][i]=o[b-1][i];
				 o[b-1][i]=s;
            }
        }
        if(t=='c')
        {
            for(j=0;j<n;j++)
               {
                  s=o[j][a-1];
                  o[j][a-1]=o[j][b-1];
                  o[j][b-1]=s;
               }
        }
        k--;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           printf("%d ",o[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
