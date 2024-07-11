#include<bits/stdc++.h>
using namespace std;
int a[5005];
int main(){
	int t;
	cin>>t;
	while(t--){
		int k,q;
		cin>>k>>q;
		for(int i=1;i<=k;i++)
		cin>>a[i];
		for(int i=1;i<=q;i++){
			int n;
			cin>>n;
			while(n>=a[1]){
				int cnt=0;
				for(int j=1;j<=k;j++){
					if(a[j]>n) break;
					cnt++;
				}
				n-=cnt;
			}
			if(n<=0) n=0;
			cout<<n<<" ";
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	return 0;
}