#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        vector<long long> ans;
        if(b%a==0)
        {for(int i=1;i<=sqrt(b+10);i++){
            if(b%i)continue;
            if(i*i>b)break;
            if((b*i)%a==0 && b*i>b){
                ans.push_back(b*i);break;
            }
            long long ni=b/i;
            if((b*ni)%a==0 && b*ni>b){
                ans.push_back(b*ni);
            }
        }
        cout<<*min_element(ans.begin(),ans.end())<<"\n";}
        else
        cout<<lcm(a,b)<<"\n";
    }
    return 0;
}