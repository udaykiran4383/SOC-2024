#include <iostream>
#include <string>
 
int main(){
 
	int n;
	std::cin >> n;
 
	for(int i = 0; i < n; i++){
 
		int t;
		std::cin >> t;
 
		std::string ans = "";
 
		for(int j = 2; j >= 0; j--){
 
			if (t >= 26 + j){
				ans = "z" + ans;
				t -= 26;
			}
			else{
				ans = (char)('a' + t-j-1) + ans;
				t = j;
			}
 
		}
 
		std::cout << ans << "\n";
	}
 
	return 0;
}