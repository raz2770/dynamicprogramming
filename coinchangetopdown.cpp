#include<bits/stdc++.h>
using namespace std;

long long int minstepTD(long long int n,long long int dp[],long long int  coins[],long long int  k)
    {
            
           
            if(n==0)
            {
              return dp[0]=0;
            }
            if(dp[n]!=0)
            {
                return dp[n];
            }
            
                long long int ans=INT_MAX;
                for(int i=0;i<k;i++)
                {
                    if(n-coins[i]>=0)
                    {   
                        // cout<<n-coins[i]<<endl;
                        long long int subproblem=minstepTD(n-coins[i],dp,coins,k);
                        ans=min(ans,subproblem+1);
                    }
                    
                }
                
                dp[n]=ans;
                return dp[n];
            
                
    
    
       
    
    }
int main()
{   
    long long  int n,k;
    cin>>n>>k;
     long long int coins[k];
    for(int i=0;i<k;i++)
    cin>>coins[i];
     long long int dp[10000]={0};
    cout<<minstepTD(n,dp,coins,k)<<endl;
}