#include <iostream>
using namespace std;
int main()
{
    long i,n,lp,t,chk;
    cin>>t;
    for (lp=0;lp<t;lp++)
    {
        cin>>n;
        long a[n],mystic[n];
        for (i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if (n==1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        for (i=0;i<n;i++)
        {
            mystic[i] = i+1;
        }
        for (i=0;i<n-1;i++)
        {
            if (mystic[i]==a[i])
            {
                chk = mystic[i];
                mystic[i] = mystic[i+1];
                mystic[i+1] = chk;
            }
        }
        if (mystic[n-1]==a[n-1])
        {
            chk = mystic[n-1];
            mystic[n-1] = mystic[n-2];
            mystic[n-2] = chk;
        }
        for (i=0;i<n;i++)
        {
            cout<<mystic[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}