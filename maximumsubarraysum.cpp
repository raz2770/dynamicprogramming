#include<bits/stdc++.h>
using namespace std;
int maxSumsubarrayspaceoptimized(int arr[],int n)
{
        int current_sum=0;
        int maxsum_sofar=0;
        for(int i=0;i<n;i++)
        {
            current_sum=current_sum+arr[i];
            if(current_sum<0)
            {
                current_sum=0;
            }
            maxsum_sofar=max(maxsum_sofar,current_sum);
           
        }
        
         return maxsum_sofar;
}
int maxSumsubarray(int arr[],int n)
{
       int dp[n];
        arr[0]>0?dp[0]=arr[0]:dp[0]=0;
        int maxsum_sofar=dp[0];
        for(int i=1;i<n;i++)
        {
            dp[i]=dp[i-1]+arr[i];
            if(dp[i]<0)
            {
                dp[i]=0;
            }
            maxsum_sofar=max(maxsum_sofar,dp[i]);
           
        }
         return maxsum_sofar;
}
int main()
{
    int n;
    cin>>n;
  
}