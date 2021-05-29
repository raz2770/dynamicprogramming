#include<bits/stdc++.h>
using namespace std;
long long int fibTD(long long int n,long long int dp[])
{ 
    if(n==0||n==1)
    return n;
    if(dp[n]!=0)
    return dp[n];
    return dp[n]=fibTD(n-1,dp)+fibTD(n-2,dp);
}
int main()
{    
    long long int dp[10000]={0};
    cout<<fibTD(70,dp)<<endl;
}