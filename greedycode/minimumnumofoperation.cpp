#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
      int k;
      cin>>k;
      int n=1;
      int count1=0;
      int count2=1;
      while(n<k)
      {
         n=n*2;
         count1++;
         count2++;
      }
    //   cout<<n<<endl;
      int n1=n/2;
      while(n1<k)
      {
          n1=n1+1;
          count1++;
      }
      int n2=n;
      while(n2>k)
      {
          n2=n2-1;
          count2++;
      }
      cout<<min(count1,count2)<<endl;
      
    }
     
}