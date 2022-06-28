#include <stdio.h>
#include <math.h>
int main()
{
    int n = 0;
    int grade[40] = {0};
    scanf("%d",&n);
    int i = 0;
    int j = 0;
    int temp = 0;
    for(i=0; i<n; i++)
    {
        scanf("%d ",&grade[i]);
    }
    for(i=0; i<n; i++)
    {
        for (j=i; j<n; j++)
            if (grade[i] < grade[j])
            {
                temp = grade[i];
                grade[i] = grade[j];
                grade[j] = temp;
            }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ",grade[i]);
    }
    
    
    return 0;
}


