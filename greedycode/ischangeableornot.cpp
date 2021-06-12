#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {   
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int five=0,ten=0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==5)
            {
                five++;
            }
            else if(arr[i]==10)
            {
                if(five>0)
                {
                    five--;
                    ten++;
                }
                else{
                    flag=true;
                    break;
                }

            }
            else{
                if(ten>0&&five>0)
                {
                   ten--;
                   five--;
                }
                else if(five>=3)
                {
                   five=five-3; 
                }
                else{
                     flag=true;
                     break;
                }
            }
        }
        flag?cout<<"False"<<endl:cout<<"True"<<endl;

    }
}