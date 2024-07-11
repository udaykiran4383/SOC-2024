#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int h, m;
    char c;
    cin >> h >> c >> m;
    string am_pm = (h < 12 ? " AM" : " PM");
    h = (h % 12 ? h % 12 : 12); // Convert to 12-hour format
    cout << (h < 10 ? "0" : "") << h << c << (m < 10 ? "0" : "") << m << am_pm << '\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++) {
        solve();
    }
    return 0;
}