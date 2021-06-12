#include <iostream>
using namespace std;


int main()
{   
    bool a[100];
    int i,j,n;
    n=50;
    for(int i=2;i<=n;i++)
    {
        a[i]=true;
    }
    for(i=2;i<=n;i++)
    {
        if(a[i]==true)
        {
            for(j=2*i;j<=n;j=j+i)
            {
                a[j]=false;
            }
        }
    }
    for(i=2;i<=n;i++)
    {
        if(a[i]==true)
        {
            cout<<i<<" ";
        }
    }
}