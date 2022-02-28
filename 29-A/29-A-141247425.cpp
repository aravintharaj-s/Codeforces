#include<stdio.h>
int main()
{
    int a[105],d[105],zd[105];
    int n;
    int i,j,sign=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&d[i]);
        zd[i]=a[i]+d[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j&&a[i]==zd[j]&&a[j]==zd[i])//????????
            {
                sign=1;
            }
        }
    }
    if(sign)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}