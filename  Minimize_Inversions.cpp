#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[a[i]];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<b[a[i]]<<" ";
        }
        cout<<endl;
    }
    return 0;
}