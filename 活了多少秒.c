#include<stdio.h>

int main()
{
    char c;
    while((scanf("%c",&c))!=EOF)
    {
        if(c>='a'&&c<='z'||c>='A'&&c<='Z')
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
