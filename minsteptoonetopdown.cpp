#include<bits/stdc++.h>
using namespace std;

long long int minstepTD(int n,long long int dp[])
{
        
       
        if(n==1)
        return dp[1]=0;
        long long int n1,n2,n3;
        n1=n2=n3=INT_MAX;
        if(n%2==0)
        {
            n1=minstepTD(n/2,dp);
            // cout<<dp[i/2]<<"2"<<endl;
        }
        if(n%3==0)
        {
            n2=minstepTD(n/3,dp);
            // cout<<n2<<"3"<<endl;
        }
        n3=minstepTD(n-1,dp);
        // cout<<n3<<"1"<<endl;
        return dp[n]=min(min(n1,n2),n3)+1;
        // cout<<min(min(n1,n2),n3)<<endl;

   

}
int main()
{   
    long long int dp[10000]={0};
    cout<<minstepTD(9,dp)<<endl;
}