#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag=0;
        for (int i = 0; i < n-2; i++)
        {
            if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p') flag++;
            else if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e') flag++;
        }
        for (int i = 0; i < n-4; i++)
        {
            if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e') flag--;
        }
        
        cout<<flag<<endl;
    }
 
    return 0;
}