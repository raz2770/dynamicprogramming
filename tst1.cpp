#include <iostream>
using namespace std;


int main()
{  
    int a[]={3,9,6,3,5,9,6};
    bool visited[7]={false};
    int i,n,count,j;
    n=7;
    for(i=0;i<=n-1;i++)
    {
        if(visited[i]==false)
        {
            count=1;
            for(j=i+1;j<=n-1;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    visited[j]=true;
                }
            }
            cout<<count<<endl;
        }
    }
    return 0; 
}