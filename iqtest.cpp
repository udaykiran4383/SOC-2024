#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int e=0;
    int o=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    if(e==1 && o==n-1){
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}