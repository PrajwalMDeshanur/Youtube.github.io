#include<bits/stdc++.h>
using namespace std;

int count_set_bits(int n)
{
    int cnt=0;
    while(n)
    {
        if(n&1)
        cnt++;
        n=n>>1;
    }
    return cnt;
}

int assign(int cost[3][3],vector<int>&dp,int n,vector<int>&job)
{
    int z=pow(2,n)-1;
    for(int mask=0;mask<z;mask++)
    {
        int x=count_set_bits(mask);
        for(int j=0;j<n;j++)
        {
            if(((mask>>j)&1)==0)
            {
                if(dp[mask]+cost[x][j]<dp[mask|(1<<j)])
                {
                    dp[mask|(1<<j)]=dp[mask]+cost[x][j];
                    job[j]=x;
                }
            }
        }
    }
    return dp[z];

}

int main()
{
    int n=3;
    int cost[3][3]={{3,2,7},{5,1,3},{2,7,2}};
    vector<int>dp(pow(2,n),1e9);
    dp[0]=0;
    vector<int>job(n,-1);
    int ans=assign(cost,dp,n,job);
    cout<<"Minimum Cost"<<ans<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Person "<<job[i]+1<<" Job"<<i+1<<endl;
    }
}