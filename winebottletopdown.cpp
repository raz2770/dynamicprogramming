#include<bits/stdc++.h>
using namespace std;
int dp[100][100]={0};
int maxprofit(int arr[],int start,int end,int year)

{   
    if(start>end)
    return 0;
    if(dp[start][end]!=0)
    {
        return dp[start][end];
    }
    int opt1=arr[start]*year+maxprofit(arr,start+1, end,year+1);
  
    int opt2=arr[end]*year+maxprofit(arr,start, end-1,year+1);
    
    return  dp[start][end]=max(opt1,opt2);
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
   
    cout<<maxprofit(arr,0,n-1,1);

}