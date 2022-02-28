#include<bits/stdc++.h>  
using namespace std;  
typedef long long ll;  
const int inf = 0x3f3f3f3f;  
int main()   
{  
    // freopen("in.txt","r",stdin);
    int n;
    int s[110][110];
    int ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=n;j++)
    	{
    		cin>>s[i][j];
    	}
    }
    int a[110];
    memset(a,1,sizeof(a));
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<i;j++)
    	{
    		if(s[i][j]==1)
    		{
    			a[i]=0;
    		}
    		else if(s[i][j]==2)
    		{
    			a[j]=0;
    		}
    		else if(s[i][j]==3)
    		{
    			a[i]=0;
    			a[j]=0;
    		}
    	}
    }
    for(int i=1;i<=n;i++)
    {
    	if(a[i])
    		ans++;
    }
    if(ans==0)
    	printf("0\n");
    else
    {
    	printf("%d\n",ans);
    	for(int i=1;i<=n;i++)
    	{
    		if(a[i])
    		{
                 printf("%d ",i);
            }
    	}
    	printf("\n");
    }
    return 0;  
}