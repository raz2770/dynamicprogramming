#include<bits/stdc++.h>
using namespace std;
int fillingiles(int N,int dp[])
{
        if(N==2)
        return 2;
        if(N==1)
        return 1;
        if(dp[N]!=0)
        return dp[N];
        else
        
        return  dp[N]=(fillingiles(N-1,dp)+fillingiles(N-2,dp))%1000000007;
}
int main()
{
  int n;
  cin>>n;
  
  int dp[1000000];
  fillingiles(n,dp);
}