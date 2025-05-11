// https://codeforces.com/problemset/problem/2091/C

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if(n%2 == 0) cout << -1;

    else {
        for(int i = n; i > 0; i--) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}