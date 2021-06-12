#include<bits/stdc++.h>
using namespace std;
int main()
{   
     int n;
     cin>>n;
     vector<int> v(n);
     for(int i=0;i<n;i++)
       cin>>v[i];
    vector<int> m;
    int half=n/2;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        m[v[i]++];
    }
    int count=0;
    int max=0;
    for(auto x:m)
    {
       
    }

       
}