// https://codeforces.com/problemset/problem/2094/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, l, r;

    cin >> n >> m >>l >> r;

    cout << (0 - (max(m-r, 0))) << " " << min(m , r) << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        solve();
    }
    return 0;
}