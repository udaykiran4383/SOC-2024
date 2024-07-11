#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
 
	for (int i = 0; i < n; i++)
		cin >> a[i];
 
 
	int ans;
	if (n == 1) ans = 1;
	else ans = 2;
 
	int i = 2;
	while (i < n) {
		int t = 2, j = i;
		while (j < n) {
			if (a[j] != a[j - 1] + a[j - 2]) {
				i = j + 1;
				break;
			}
			j++;
			t++;
		}
		if (t > ans) ans = t;
		if (ans == n - i + 2) break;
	}
	cout << ans;
 
	return 0;
}
