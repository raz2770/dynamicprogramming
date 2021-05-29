#include<bits/stdc++.h>
using namespace std;
int dp[100][100]={0};
int maxprofit(int arr[],int start,int end)

{    
   
   while(start<=end)
   {   
       int j=start,i=0; 
       while(j<=end)
       {
         if(j==i)
          {
            dp[i][j]=arr[i]*(end-(j-i)+1);
          }
          else{
            int opt1=arr[j]*(end-(j-i)+1)+dp[i][j-1];
            int opt2=arr[i]*(end-(j-i)+1)+dp[i+1][j];
            dp[i][j]=max(opt1,opt2);
          }
          j++;
          i++;
       }
       start++;
    
   }
   return dp[0][end];
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    
    cout<<maxprofit(arr,0,n-1)<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}