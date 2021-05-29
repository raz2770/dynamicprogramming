#include<bits/stdc++.h>
using namespace std;

int minstepBU( int n, int  coins[], int  k)
{
            
    long long int dp[100001]={0};
        
            for(int i=1;i<=n;i++)
            {
                dp[i]=INT_MAX;
                for(int j=0;j<k;j++)
                    {
                        if(n-coins[j]>=0)
                        {   
                            long long int subprob=dp[n-coins[j]];
                            dp[i]=min(dp[i],subprob+1);
                        }
                        
                    }
                
                    
            }
        return dp[n]; 
                
    
    
       
    
}
int main()
{   
     int n,k;
    cin>>n>>k;
    int coins[k];
    for(int i=0;i<k;i++)
    cin>>coins[i];
    cout<<minstepBU(n,coins,k)<<endl;
}