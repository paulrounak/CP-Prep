#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin>>n;
    int ans;
    if (n % 2 == 0) 
        ans = (n*n) / 4 + 1;
    else
        ans = (n*n + 3) / 4;
    cout << ans << endl;
}

int main () {
    int t;
    cin >> t;
    while (t--)
        solve();
}
