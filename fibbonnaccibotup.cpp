#include<iostream>
using namespace std;
long long int fibBU(int n)
{
    long long int dp[1000]={0};
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];

    }
    return dp[n];

}
int main()
{
    cout<<fibBU(500)<<endl;
}