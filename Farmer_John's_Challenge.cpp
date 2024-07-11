#include<iostream>
using namespace std;
int t,n,k;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n==k)
        {
            for(int i=0;i<n;i++)
                cout<<1<<" ";
        }
        else if(k==1)
            for(int i=1;i<=n;i++)
                cout<<i<<" ";
        else
            cout<<-1;
        cout<<endl;
    }
    return 0;
}