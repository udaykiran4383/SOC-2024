#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,sum=0;
        cin>>n;
        priority_queue<long long> pq;
        for(int i=0 ; i<n ;i++){
            long long x;
            cin>>x;
            if(x==0){
                if(!pq.empty()){
                    sum+=pq.top() ;
                    pq.pop() ;
                }
            }
            else{
                pq.push(x) ;
            }
        }
        cout<<sum<<endl ;
    }
    return 0;
}