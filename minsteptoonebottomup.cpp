#include<bits/stdc++.h>
using namespace std;

long long int minstepBU(int n)
{
    long long int dp[10000]={0};
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {    
        long long int n1,n2,n3;
        n1=n2=n3=INT_MAX;
        if(i%2==0)
        {
            n1=dp[i/2];
            // cout<<dp[i/2]<<"2"<<endl;
        }
        if(i%3==0)
        {
            n2=dp[i/3];
            // cout<<n2<<"3"<<endl;
        }
        n3=dp[i-1];
        // cout<<n3<<"1"<<endl;
        dp[i]=min(min(n1,n2),n3)+1;
        // cout<<min(min(n1,n2),n3)<<endl;

    }
    return dp[n];

}
int main()
{
    cout<<minstepBU(9)<<endl;
}